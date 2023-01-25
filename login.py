from flask import Flask
from login import login 

login = Blueprint('login', __name__)


@login.route('/login', methods=['POST'])
def llamarServicioSet():
    global user,passw
    ##try:
    user =request.json['user']
    passw =request.json['passw']
    print("Username",user)
    print("Password",passw)

    #inicializarVariables(categoryId)
    """"

Ejemplo: 
Url: http://localhost:5000/login
Datos de entrada: 

{
    "user":"derlis"
    "passw":"123"
    
}
Salida:
{
    "categoria": "Null",
    "codRes": "ERROR",
    "menRes": "No existe"
}"""