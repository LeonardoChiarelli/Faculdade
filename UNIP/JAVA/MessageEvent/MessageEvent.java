import java.util.ArrayList;
import java.util.EventObject;
import java.util.List;

// === 1. Classe do Evento ===

class MensagemEvent extends EventObject {
    private String mensagem;

    public MensagemEvent(Object source, String mensagem) {
        super(source);
        this.mensagem = mensagem;
    }

    public String getMensagem() {
        return mensagem;
    }
}

// === 2. Interface do Listener (ouvinte) ===
interface MensagemListener {
    void mensagemRecebida(MensagemEvent event);
}

// === 3. Classe que dispara os eventos ===
class Mensageiro {
    private List<MensagemListener> listeners = new ArrayList<>();

    // Adiciona ouvintes
    public void addMensagemListener(MensagemListener listener) {
        listeners.add(listener);
    }

    // Dispara evento para todos os ouvintes
    public void enviarMensagem(String mensagem) {
        MensagemEvent event = new MensagemEvent(this, mensagem);
        for (MensagemListener listener : listeners) {
            listener.mensagemRecebida(event);
        }
    }
}

// === 4. Programa principal ===
class Aula03 {
    public static void main(String[] args) {
        Mensageiro mensageiro = new Mensageiro();

        // Adicionando um ouvinte
        mensageiro.addMensagemListener(new MensagemListener() {
            @Override
            public void mensagemRecebida(MensagemEvent event) {
                System.out.println("Ouvinte 1 recebeu: " + args[0]);
            }
        });

        // Adicionando outro ouvinte
        mensageiro.addMensagemListener(event ->
                System.out.println("Ouvinte 2 recebeu (lambda): " + args[1])
        );

        // Disparando eventos
        mensageiro.enviarMensagem("Olá, mundo!");
        mensageiro.enviarMensagem("Evento personalizado funcionando!");
    }
}
