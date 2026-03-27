package com.fatec.ads;

public class Recepcionista extends Funcionario {
    private String cpf;

    //Getters
    public String getCpf(){
        return cpf;
    }
    
    //Setters
    public void setCpf(String c) throws Exception{
        if(c.length()>14 || c.matches(".*[a-zA-Z].*")){
            throw new Exception("O cpf deve conter apenas números e ter até 14 caracteres!");
        }else{
            this.cpf = c;
        }
    }

    //Constructors
    public Recepcionista(String n, String c, String t, String s) throws Exception{
        super(n, t, s);
        setCpf(c);
    }
    public Recepcionista(){
        super("indefinido", "indefinido", "indefinido");
        this.cpf = "000.000.000-00";
    }

    public Agenda marcarAgenda() throws Exception{
        var p1 = new Paciente(1, "jose da silva", "jose@norton.net.br");
        var m1 = new Medico("Maria Antonieta", "128371833", "1241-1241", "Geratria", "senha");
        var a1 = new Agenda("12/12/12", "10:20", m1, p1);
        return a1;
    }
    public void acessar(){

    }
    public void mostrar(){
        System.out.println("------RECEPCIONISTA------");
        System.out.println("Nome: " + this.nome);
        System.out.println("Cpf: " + getCpf());
        System.out.println("Telefone: " + this.telefone);
        System.out.println("Senha: " + this.senha + "\n");
    }
}
