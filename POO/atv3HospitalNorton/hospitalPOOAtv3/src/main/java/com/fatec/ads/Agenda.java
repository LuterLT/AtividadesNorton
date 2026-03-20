package com.fatec.ads;

public class Agenda {
    private String data;
    private String hora;
    private Medico medico;
    private Paciente paciente;
    private Consulta consulta;

    // Getters------------------------------------------------------------------------
    public String getData() {
        return data;
    }
    public String getHora() {
        return hora;
    }
    public Medico getMedico() {
        return medico;
    }
    public Paciente getPaciente() {
        return paciente;
    }
    public Consulta getConsulta() {
        return consulta;
    }

    // Setters--------------------------------------------------------------------------
    public void setData(String d) throws Exception {
        if (d.matches(".*[a-zA-Z].*")) {
            throw new Exception("A data não deve conter letras!!!");
        } else {
            this.data = d;
        }
    }
    public void setHora(String h) {
        this.hora = h;
    }
    public void setMedico(Medico m) {
        this.medico = m;
    }
    public void setPaciente(Paciente p) {
        this.paciente = p;
    }
    public void setConsulta(Consulta consulta) {
        this.consulta = consulta;
    }

    // Constructors----------------------------------------------------------------------
    public Agenda(String d, String h, Medico m, Paciente p, Consulta c) throws Exception {
        setData(d);
        setHora(h);
        setMedico(m);
        setPaciente(p);
        setConsulta(c);
    }

    public Agenda() {
        this.data = "0/0/0";
        this.hora = "indefinido";
        this.medico = null;
        this.paciente = null;
        this.consulta = null;
    }

    public void consultar() {
    }

    public void mostrar() {
        System.out.println("------AGENDA------");
        System.out.println("Data: " + getData());
        System.out.println("Hora: " + getHora());
        System.out.println("Medico: " + getMedico());
        System.out.println("Paciente: " + getPaciente());
        System.out.println("Consulta: " + getConsulta() + "\n");
    }

}
