package com.fatec.ads;

public class Medico {
    private String nome;
    private String crm;
    private String telefone;
    private String especialidade;
    private String senha;

    //Getters
    public String getNome(){
        return nome;
    }
    public String getCrm(){
        return crm;
    }
    public String getTelefone(){
        return telefone;
    }
    public String getEspecialidade(){
        return especialidade;
    }
    public String getSenha(){
        return senha;
    }
    //Setters
    public void setNome(String n){
        this.nome = n;
    }
    public void setCrm(String c){
        this.nome = c;
    }
    public void setTelefone(String t) throws Exception{
        if(t.length()>20 || t.matches(".*[a-zA-Z].*")){
            throw new Exception("O telefone deve conter até 20 caracteres e não ter letras");
        }else{
            this.nome = t;
        }
    }
    public void setEspecialidade(String e){
        this.nome = e;
    }
    public void setSenha(String s){
        this.nome = s;
    }
    

    //Constructors
    public Medico(String n, String c, String t, String e, String s) throws Exception{
        setNome(n);
        setCrm(c);
        setTelefone(t);
        setEspecialidade(e);
        setSenha(s);
    }
    public Medico(){
        this.nome = "indefinido";
        this.crm = "indefinido";
        this.telefone = "(00)0000-00000";
        this.especialidade = "indefinido";
        this.senha = "indefinido";
    }

    public void acessarConsulta(Consulta consulta){
        consulta.mostrar();
    }
    public void acessarExame(Exame exame){
        exame.mostrar();
    }
    public void mostrar(){
        System.out.println("------MEDICO------");
        System.out.println("Nome: " + getNome());
        System.out.println("Crm: " + getCrm());
        System.out.println("Telefone: " + getTelefone());
        System.out.println("Especialidade: " + getEspecialidade());
        System.out.println("Senha: " + getSenha() + "\n");
    }
}
