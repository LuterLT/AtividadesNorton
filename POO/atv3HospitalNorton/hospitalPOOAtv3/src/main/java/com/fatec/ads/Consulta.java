package com.fatec.ads;

import java.util.ArrayList;
import java.util.List;

public class Consulta extends Agenda {
    private String motivo;
    private String historico;//adicionar lista de exames e receitas
    List<Exame> exames = new ArrayList<Exame>();
    List<Receita> receitas = new ArrayList<Receita>();
    
    //Getters---------------------------------------------------------------------------
    
    public String getMotivo(){
        return motivo;
    }
    public String getHistorico(){
        return historico;
    }
    public List<Exame> getExames(){
        return exames;
    }
    public List<Receita> getReceitas(){
        return receitas;
    }
    //Setters----------------------------------------------------------------------------
    public void setMotivo(String mot){
        this.motivo = mot;
    }
    public void setHistorico(String his){
        this.historico = his;
    }


    //Constructors-------------------------------------------------------------------------
    public Consulta(String hor, String dat, String mot, String hist, Medico med, Paciente pac) throws Exception{
        super(dat, hor, med, pac);
        setMotivo(mot);
        setHistorico(hist);
    }
    public Consulta(){
        super();
        this.motivo = "indefinido";
        this.historico = "indefinido";
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
