from flask import Flask


app = Flask(__name__)

#servivcios rest

@app.route('/', methods=['GET'])
def hello():
    return 'Hola Mundo'

if __name__ == "__main__":
    app.run(host = '0.0.0.0', debug = True, port = 5000)
    app.run(debug = True)
