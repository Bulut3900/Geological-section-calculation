#include <iostream>

using namespace std;


int main()
{
	double C;//总方向
	//cout << "总方向:" << endl;
	C = 260.5;
	cout << "总方向:" <<C<< endl;
	//cin >> C;

	double L;//导线长
	//cout << "导线长：" << endl;
	L = 26;
	cout << "导线长：" <<L<< endl;
	//cin >> L;

	double B;//导线方位角
	//cout << "导线方位角：" << endl;
	B = 246;
	cout << "导线方位角：" <<B<< endl;
	//cin >> B;

	double β;//坡角
	//cout << "坡角：" << endl;
	β = 10;
	cout << "坡角：" << β<< endl;
	//cin >> β;

	double l;//分层斜距
	//cout << "分层斜距：" << endl;
	l = 10;
	cout << "分层斜距：" <<l<< endl;
	//cin >> l;

	double A,α;//产状
	//cout << "产状：" << endl;
	A = 205;
	α = 40;
	cout << "产状：" <<A<<"   "<< α<< endl;

	//cin >> A>>α;
	cout << endl;

	double γ = A - B;//导线方向与岩层倾向夹角
	double d = l * abs(sin(α * (3.1415926 / 180)) * cos(β * (3.1415926 / 180)) * cos(γ * (3.1415926 / 180)) + sin(β * (3.1415926 / 180)) * cos(α * (3.1415926 / 180)));//中间的+有时需要变成-，具体情况具体分析
	
	double ε = B - C;//总方向与导线方位夹角
	double L1 = L * cos(β*(3.1415926/180));//斜平距
	double l1 = l * cos(β * (3.1415926 / 180));//分层平距
	double L2 = L1 * cos(ε * (3.1415926 / 180));//视平距
	double l2 = l1 * cos(ε * (3.1415926 / 180));//分层视平距

	double β1= atan(tan(β * (3.1415926 / 180)) * cos(ε * (3.1415926 / 180)))*(180/3.1415926);
	
	double H = l2 * tan(β1 * (3.1415926 / 180));//高差
	

	double ε1 = A - C;//总方向与倾向夹角

	double α1 = atan(tan(α * (3.1415926 / 180)) * cos(ε1 * (3.1415926 / 180))) * (180 / 3.1415926);//视倾角

	cout << "厚度" << d << endl;
	cout<< "导线方向与岩层倾向夹角"<<γ<<endl;
	cout << "总方向与导线方位夹角" << ε << endl;
	cout << "斜平距" << L1 << endl;
	cout << "分层平距" << l1 << endl;
	cout << "视平距" << L2 << endl;
	cout << "分层视平距" << l2 << endl;
	cout << "视坡角" << β1 << endl;

	cout << "高差" << H << endl;
	cout << "总方向与倾向夹角" << ε1 << endl;
	cout << "视倾角" << α1 << endl;
	






}
