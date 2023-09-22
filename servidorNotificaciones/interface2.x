

/*Declaracion de datos a transferir entre el servidor de alertas y el servidor de notificaciones*/

/*Declaracion de constantes*/
const MAXNOM = 20;

/*Declaracion de la estructura que permite almacenar los datos de una notificacion*/
struct notificacion_sensores_fuera_rango{
	int frecuencia_cardiaca;
	int tension_arterial;
	int frecuencia_respiratoria;
	int saturacion_oxigeno;
	int temperatura;
	
};

/*Definicion de las operaciones que se pueden realizar*/
program enviar_notificacion{
	version enviar_notificacion_1{
		bool enviarNotificacion(notificacion_sensores_fuera_rango objNotificacion)=1;		
	}=2;
}=0x20000002;
