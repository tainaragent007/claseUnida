#! /usr/bin/env python3
from flask import Blueprint, request, jsonify
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