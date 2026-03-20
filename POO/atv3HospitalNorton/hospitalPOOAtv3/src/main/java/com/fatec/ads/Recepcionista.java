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
    public void setCpf(String c) throws Exception{
        if(c.length()>14 || c.matches(".*[a-zA-Z].*")){
            throw new Exception("O cpf deve conter apenas números e ter até 14 caracteres!");
        }else{
            this.cpf = c;
        }
    }
    public void setTelefone(String t){
        this.telefone = t;
    }
    public void setSenha(String s){
        this.senha = s;
    }

    //Constructors
    public Recepcionista(String n, String c, String t, String s) throws Exception{
        setNome(n);
        setCpf(c);
        setTelefone(t);
        setSenha(s);
    }
    public Recepcionista(){
        this.nome = "indefinido";
        this.cpf = "000.000.000-00";
        this.telefone = "indefinido";
        this.senha = "indefinido";
    }


    public void acessarPaciente(Paciente paciente){
        paciente.mostrar();
    }
    public void acessarConsulta(Consulta consulta){
        consulta.mostrar();
    }
    public void mostrar(){
        System.out.println("------RECEPCIONISTA------");
        System.out.println("Nome: " + getNome());
        System.out.println("Cpf: " + getCpf());
        System.out.println("Telefone: " + getTelefone());
        System.out.println("Senha: " + getSenha() + "\n");
    }
}
