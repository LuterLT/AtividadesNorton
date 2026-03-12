package com.fatec.ads;

public class Consulta {
    private String hora;
    private String data;
    private Medico medico;
    private Paciente paciente;
    private String motivo;
    private String historico;

    //Getters
    public String getHora(){
        return hora;
    }
    public String getData(){
        return data;
    }
    public String getMotivo(){
        return motivo;
    }
    public String getHistorico(){
        return historico;
    }
    public Medico getMedico(){
        return medico;
    }
    public Paciente getPaciente(){
        return paciente;
    }
    //Setters
    public void setHora(String hor){
        this.hora = hor;
    }
    public void setData(String dat){
        this.data = dat;
    }
    public void setMotivo(String mot){
        this.motivo = mot;
    }
    public void setHistorico(String his){
        this.historico = his;
    }
    public void setMedico(Medico med) throws Exception{
        if (med == null){
            throw new Exception("O campo médico não pode estar vazio!");
        }else{
            this.medico = med;
        }
    }
    public void setPaciente(Paciente pac){
        this.paciente = pac;
    }


    //Constructors
    public Consulta(String hor, String dat, String mot, String hist, Medico med, Paciente pac) throws Exception{
        setHora(hor);
        setData(dat);
        setMotivo(mot);
        setHistorico(hist);
        setMedico(med);
        setPaciente(pac);
    }
    public Consulta(){
        this.hora = "indefinido";
        this.data = "indefinido";
        this.motivo = "indefinido";
        this.historico = "indefinido";
        this.medico = null;
        this.paciente = null;
    }


    public void marcar(){};
    public void cancelar(){};
    public void consultar(){};
    public void realizar(){};
    public void atualizar(){};
    public void mostrar(){
        System.out.println("------CONSULTA------");
        System.out.println("Hora: " + getHora());
        System.out.println("Data: " + getData());
        System.out.println("Motivo: " + getMotivo());
        System.out.println("Historico: " + getHistorico());
        System.out.println("Medico: " + getMedico());
        System.out.println("Paciente: " + getPaciente() + "\n");
    }


}
