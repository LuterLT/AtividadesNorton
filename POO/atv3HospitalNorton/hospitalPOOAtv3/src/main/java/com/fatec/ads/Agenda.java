package com.fatec.ads;

public class Agenda {
    private String data;
    private String hora;
    private String medico;
    private String paciente;

    //Getters
    public String getData(){
        return data;
    }
    public String getHora(){
        return hora;
    }
    public String getMedico(){
        return medico;
    }
    public String getPaciente(){
        return paciente;
    }
    //Setters
    public void setData(String d) throws Exception{
        if (d.matches(".*[a-zA-Z].*")){
            throw new Exception("A data não deve conter letras!!!");
        }else{
            this.data = d;
        }
    }
    public void setHora(String h){
        this.hora = h;
    }
    public void setMedico(String m){
        this.medico = m;
    }
    public void setPaciente(String p){
        this.paciente = p;
    }


    //Constructors
    public Agenda(String d, String h, String m, String p) throws Exception{
        setData(d);
        setHora(h);
        setMedico(m);
        setPaciente(p);
    }
    public Agenda(){
        this.data = "0/0/0";
        this.hora = "indefinido";
        this.medico = "indefinido";
        this.paciente = "indefinido";
    }

    public void consultar(){}
    public void mostrar(){
        System.out.println("------AGENDA------");
        System.out.println("Data: " + getData());
        System.out.println("Hora: " + getHora());
        System.out.println("Medico: " + getMedico());
        System.out.println("Paciente: " + getPaciente() + "\n");
    }
}
