#!/bin/bash

# === CONFIGURAÇÃO INICIAL ===
read -p "https://github.com/vfranca-dev/beecrowd-beginner" repo_url

# Nome da branch (padrão: main)
read -p "main" branch
branch=${branch:-main}

# Mensagem do commit
read -p "Commit" commit_msg
commit_msg=${commit_msg:-"upload"}

# === INÍCIO DO SCRIPT ===
echo "iniciando o envio de arquivos para o GitHub..."

# Inicializa o repositório Git
git init

# Adiciona todos os arquivos
git add .

# Faz o commit com a mensagem
git commit -m "$commit_msg"

# Adiciona o repositório remoto
git remote add origin "$repo_url"

# Envia para o GitHub
git branch -M "$branch"
git push -u origin "$branch"

echo "✅ Projeto enviado com sucesso para o GitHub!"
