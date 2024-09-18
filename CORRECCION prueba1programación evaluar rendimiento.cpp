#include <iostream>
using namespace std;

void ejercicio1(){
	double tp = 50, fn = 30, fp = 24, tn = 600;
	double exactitud, precision, sensibilidad, especificidad, vpNegativo;
	double tasaFP, tasaFN, resultadoF1;
	exactitud = (tp+tn)/(tp+tn+fp+fn);
	precision = (tp)/(tp+fp);
	sensibilidad = (tp)/(tp+fn);
	especificidad = (tn)/(tn+fp);
	vpNegativo = (tn)/(tn+fn);
	tasaFP = (fp)/(fp+tn);
	tasaFN = (fn)/(fn+tp);
	resultadoF1 = (2*precision*sensibilidad)/(precision+sensibilidad);
	cout<<"INDICADORES"<<endl;
	cout<<"1. Exactitud = "<<exactitud<<endl;
	cout<<"2. Precision = "<<precision<<endl;
	cout<<"3. Sensibilidad = "<<sensibilidad<<endl;
	cout<<"4. Especificidad = "<<especificidad<<endl;
	cout<<"5. Valor Pred. Negativo = "<<vpNegativo<<endl;
	cout<<"6. Tasa Falsos Positivos = "<<tasaFP<<endl;
	cout<<"7. Tasa Falsos Negativos = "<<tasaFN<<endl;
	cout<<"8. Indicador F1 = "<<resultadoF1<<endl;
}

void ejercicio2(){
	int nota;
	cout<<"Ingrese su nota para evaluar su rendimiento: "<<endl;
	cin>>nota;
	if (nota<=0) cout<<"Nota mal ingresada"<<endl;
	else if (nota<=4) cout<<"No alcanza los aprendizajes requeridos"<<endl;
	else if (nota<=6) cout<<"Esta proximo a alcanzar los aprendizajes requeridos"<<endl;
	else if (nota<=8) cout<<"Alcanza los aprendizajes requeridos"<<endl;
	else if (nota==9) cout<<"Domina los aprendizajes requeridos"<<endl;
	else if(nota==10) cout<<"Supera los aprendizajes requeridos"<<endl;
	else cout<<"Nota mal ingresada"<<endl;
}

int main(){
	//ejercicio1();
	ejercicio2();
	return 0;
}
