usuario_correto = "isaque"
senha_correta = "1234"

usuario = str(input("usuario: "))
senha = str(input("senha: "))

if usuario == usuario_correto and senha == senha_correta:
    print("Bem-vindo, Isaque!")
elif usuario == usuario_correto and senha != senha_correta:
    print("Senha incorreta.")

elif usuario != usuario_correto and senha == senha_correta:
    print("Usuário não encontrado.")

else:
    print("usuario e senha errados.")