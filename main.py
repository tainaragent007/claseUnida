#! /usr/bin/env python3
from flask import Flask
app = Flask(__name__)

##servicios rest
@app.route("/", methods=['GET'])
def hello():
    return "Hola Mundo"

if __name__ == "__main__":
    app.run(host = '0.0.0.0', debug = True, port = 5001)
    app.run(debug = True)
