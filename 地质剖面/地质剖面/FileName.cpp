#include <iostream>

using namespace std;


int main()
{
	double C;//�ܷ���
	//cout << "�ܷ���:" << endl;
	C = 260.5;
	cout << "�ܷ���:" <<C<< endl;
	//cin >> C;

	double L;//���߳�
	//cout << "���߳���" << endl;
	L = 26;
	cout << "���߳���" <<L<< endl;
	//cin >> L;

	double B;//���߷�λ��
	//cout << "���߷�λ�ǣ�" << endl;
	B = 246;
	cout << "���߷�λ�ǣ�" <<B<< endl;
	//cin >> B;

	double ��;//�½�
	//cout << "�½ǣ�" << endl;
	�� = 10;
	cout << "�½ǣ�" << ��<< endl;
	//cin >> ��;

	double l;//�ֲ�б��
	//cout << "�ֲ�б�ࣺ" << endl;
	l = 10;
	cout << "�ֲ�б�ࣺ" <<l<< endl;
	//cin >> l;

	double A,��;//��״
	//cout << "��״��" << endl;
	A = 205;
	�� = 40;
	cout << "��״��" <<A<<"   "<< ��<< endl;

	//cin >> A>>��;
	cout << endl;

	double �� = A - B;//���߷������Ҳ�����н�
	double d = l * abs(sin(�� * (3.1415926 / 180)) * cos(�� * (3.1415926 / 180)) * cos(�� * (3.1415926 / 180)) + sin(�� * (3.1415926 / 180)) * cos(�� * (3.1415926 / 180)));//�м��+��ʱ��Ҫ���-����������������
	
	double �� = B - C;//�ܷ����뵼�߷�λ�н�
	double L1 = L * cos(��*(3.1415926/180));//бƽ��
	double l1 = l * cos(�� * (3.1415926 / 180));//�ֲ�ƽ��
	double L2 = L1 * cos(�� * (3.1415926 / 180));//��ƽ��
	double l2 = l1 * cos(�� * (3.1415926 / 180));//�ֲ���ƽ��

	double ��1= atan(tan(�� * (3.1415926 / 180)) * cos(�� * (3.1415926 / 180)))*(180/3.1415926);
	
	double H = l2 * tan(��1 * (3.1415926 / 180));//�߲�
	

	double ��1 = A - C;//�ܷ���������н�

	double ��1 = atan(tan(�� * (3.1415926 / 180)) * cos(��1 * (3.1415926 / 180))) * (180 / 3.1415926);//�����

	cout << "���" << d << endl;
	cout<< "���߷������Ҳ�����н�"<<��<<endl;
	cout << "�ܷ����뵼�߷�λ�н�" << �� << endl;
	cout << "бƽ��" << L1 << endl;
	cout << "�ֲ�ƽ��" << l1 << endl;
	cout << "��ƽ��" << L2 << endl;
	cout << "�ֲ���ƽ��" << l2 << endl;
	cout << "���½�" << ��1 << endl;

	cout << "�߲�" << H << endl;
	cout << "�ܷ���������н�" << ��1 << endl;
	cout << "�����" << ��1 << endl;
	






}
