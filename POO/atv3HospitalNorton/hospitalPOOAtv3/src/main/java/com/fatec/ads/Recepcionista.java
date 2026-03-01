package com.fatec.ads;

public class Recepcionista {
    private String nome;
    private String cpf;
    private String telefone;
    private String senha;

    //Getters
    public String getNome(){
        return nome;
    }
    public String getCpf(){
        return cpf;
    }
    public String getTelefone(){
        return telefone;
    }
    public String getSenha(){
        return senha;
    }
    //Setters
    public void setNome(String n){
        this.nome = n;
    }
    public void setCpf(String c){
        this.cpf = c;
    }
    public void setTelefone(String t){
        this.telefone = t;
    }
    public void setSenha(String s){
        this.senha = s;
    }

    //Constructors
    public Recepcionista(String n, String c, String t, String s){
        setNome(n);
        setCpf(c);
        setTelefone(t);
        setSenha(s);
    }
    public Recepcionista(){
        this.nome = "indefinido";
        this.cpf = "indefinido";
        this.telefone = "indefinido";
        this.senha = "indefinido";
    }


    public void acessar(){}
    public void mostrar(){
        System.out.println("------RECEPCIONISTA------");
        System.out.println("Nome: " + getNome());
        System.out.println("Cpf: " + getCpf());
        System.out.println("Telefone: " + getTelefone());
        System.out.println("Senha: " + getSenha() + "\n");
    }
}
