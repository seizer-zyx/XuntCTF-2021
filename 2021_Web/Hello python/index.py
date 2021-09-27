from flask import Flask, request, render_template_string
app = Flask(__name__)


@app.route('/', methods=['GET', 'POST'])
def test():
    username = ''
    passwd = ''
    msg = ''
    if request.method == 'POST':
        username = request.form.get('username')
        passwd = request.form.get('passwd')
        msg = "用户名%s不存在" % username
    template = '''
    <html>
        <head>
            <style>
                body {
                    background: url("static/1.jpg");
                    background-repeat: no-repeat;
                    background-size: 100% auto;
                }

                #login-box {
                    width: 30%;
                    height: auto;
                    margin: 0 auto;
                    margin-top: 15%;
                    text-align: center;
                    background: #00000060;
                    padding: 20px 50px;
                }

                #login-box h1 {
                    color: #fff;
                }

                #login-box .form .item input {
                    margin-top: 15px;
                }

                #login-box .form i {
                    font-size: 18px;
                    color: #fff;
                }

                #login-box .form .item input {
                    width: 180px;
                    font-size: 18px;
                    border: 0;
                    border-bottom: 2px solid#fff;
                    padding: 5px 10px;
                    background: #ffffff00;
                    color: #fff;
                }

                #login-box input {
                    margin-top: 15px;
                    width: 180px;
                    height: 30px;
                    font-size: 20px;
                    font-weight: 700;
                    color: #fff;
                    background: linear-gradient(to right, #f30909 0%, #4013e6e1 100%);
                    border-radius: 15px;
                }
            </style>
        </head>
        <div id="login-box">
            <form method="POST" action="">
                <h1>Login</h1>
                <div class="form">
                    <div class="item">
                        <i class="fa fa-user-circle-o" aria-hidden="true"></i>
                        <input type="text" placeholder="Username" name="username">
                    </div>
                    <div class="item">
                        <i class="fa fa-key" aria-hidden="true"></i>
                        <input type="password" placeholder="Password" name="passwd">
                    </div>
                </div>
                <input type="submit" value="Login">
                <h3 style="color: red">''' + '%s </h3>' % msg + '''
            </form>
        </div>

        <body>
        </body>

    </html>
    '''
    return render_template_string(template, passwd=passwd)


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=80)
