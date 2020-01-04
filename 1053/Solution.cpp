#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
#define maxn 256
int m[maxn][maxn];

void OddMagic(int n)                         //�����׻÷�
{
    memset(m,0,sizeof(m));                   //�÷�����
    int x=0, y=n/2;
    for(int i=1; i<=n*n; i++)
    {
        m[x][y]=i;
        x--;                                 //���������Ͻ����
        y++;
        if(x<0 && y>n-1) {x=x+2; y=y-1;}     //�ضԽ��߳���
        else if(x<0) x=x+n;                  //���ϱ߽糬��
        else if(y>n-1) y=y-n;                //���ұ߽糬��
        else if(m[x][y]!=0) {x=x+2; y=y-1;}  //���Ͻ������
    }
}

void DoubleEvenMagic(int n)                  //˫ż���׻÷�
{
    memset(m,0,sizeof(m));                   //�÷�����
    for(int i=1, x=0, y=0; i<=n*n; i++)      //���ΰ�˳�򸳳�ֵ
    {
        m[x][y]=i;
        y++;
        if(y>n-1) {x++; y-=n;}
    }
    for(int i=0; i<n; i++)                   //���÷��ֽ��m*m��4�׻÷�������ÿ��4�׻÷��ĶԽ���Ԫ�ػ����以����
        for(int j=0; j<n; j++)
            if(i%4==0 && j%4==0)             //��Խ���
                for(int k=0; k<4; k++)
                    m[i+k][j+k]=(n*n+1)-m[i+k][j+k];
            else if(i%4==3 &&j%4==0)         //�ҶԽ���
                for(int k=0; k<4; k++)
                    m[i-k][j+k]=(n*n+1)-m[i-k][j+k];
}

void SingleEvenMagic(int n)                  //��ż���׻÷�
{
    memset(m,0,sizeof(m));                   //�÷�����
    int n0=n/2;
    OddMagic(n0);                            //���÷��ֽ��2*2�������׻÷������������׻÷�����������Ͻ������׻÷�
    for(int i=0; i<n0; i++)
        for(int j=0; j<n0; j++)
        {
            m[i+n0][j+n0]=m[i][j]+n0*n0;       //������½������׻÷�
            m[i][j+n0]=m[i+n0][j+n0]+n0*n0;     //������Ͻ������׻÷�
            m[i+n0][j]=m[i][j+n0]+n0*n0;       //������½������׻÷�
        }
    int k=(n-2)/4;                             //���㹫ʽn=4*k+2
    for(int i=0; i<n0; i++)
        for(int j=0; j<k; j++)
            if(i==n0/2) swap(m[i][i+j],m[i+n0][i+j]);   //�����Ͻǻ÷����м�Ԫ�ش������ҵ�k��Ԫ�������½ǻ÷���Ӧλ��Ԫ�ؽ���
            else swap(m[i][j],m[i+n0][j]);              //�����Ͻǻ÷������м������ÿ��ǰk��Ԫ�������½ǻ÷���Ӧλ��Ԫ�ؽ���
    for(int i=0; i<n0; i++)
        for(int j=n0+n0/2; j>n0+n0/2-(k-1); j--)
            swap(m[i][j],m[i+n0][j]);                   //�����Ͻǻ÷����м�������������k-1��Ԫ�������½ǻ÷���Ӧλ��Ԫ�ؽ���
}

bool Check(int n)
{
    int cnt=n*(n*n+1)/2;                                //ÿ��ÿ���Լ��Խ���֮��
    for(int i=0; i<n; i++)
    {
        int sum_row=0,sum_line=0;
        for(int j=0; j<n; j++)
            {
                sum_row+=m[i][j];                       //������
                sum_line+=m[j][i];                      //������
            }
        if(sum_row!=cnt || sum_line!=cnt) return false;
    }
    int sum_left=0,sum_right=0;
    for(int i=0; i<n; i++)
    {
        sum_left+=m[i][i];                              //�����Խ���
        sum_right+=m[n-i-1][i];                         //����ҶԽ���
    }
    if(sum_left!=cnt || sum_right!=cnt) return false;
    return true;
}

void print(int n)                                       //����ʽ���
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(j==n-1) printf("%d\n",m[i][j]);
            else printf("%d ",m[i][j]);
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n)
    {
        //if(n<3) cout<<"Impossible"<<endl;
        if(n&1) {OddMagic(n); if(Check(n)) print(n);}                    //��������׻÷�
        else if(!(n%4)) {DoubleEvenMagic(n); if(Check(n)) print(n);}     //���˫ż���׻÷�
        else {SingleEvenMagic(n); if(Check(n)) print(n);}                //�����ż���׻÷�
    }
    return 0;
}
