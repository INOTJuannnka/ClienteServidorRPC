


/*Declaracion de datos a transferir entre el cliente y el servidor de alertas*/

/*Declaracion de constantes*/
const MAXNOM = 20;

/*Declaracion de la estructura que permite almacenar los datos de los sensores */
struct nodo_datos_sensores{
	int frecuencia_cardiaca;
	int tension_arterial;
	int frecuencia_respiratoria;
	int saturacion_oxigeno;
	int temperatura;
	
};

/*Definicion de las operaciones que se pueden realizar*/
program enviar_datos_sensores{
	version enviar_datos_sensores_1{
		bool enviarDatosSensores(nodo_datos_sensores objSensor)=1;		
	}=2;
}=0x20000001;
