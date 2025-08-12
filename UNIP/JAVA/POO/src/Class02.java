import javax.swing.*;
import java.awt.*;

public class Class02 extends JFrame {

    public Class02() {
        setTitle("Simple AWT");
        setSize(600, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBackground(new Color(255, 235, 255));
        setLocationRelativeTo(null);

        JPanel mainPanel = new JPanel();
        mainPanel.setBackground(new Color(255, 235, 255));
        mainPanel.setLayout(new BoxLayout(mainPanel, BoxLayout.Y_AXIS));
        mainPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20 ,20));
        mainPanel.setAlignmentX(Component.CENTER_ALIGNMENT);

        var dimension = new Dimension(200, 50);
        var font = new Font("SansSerif", Font.PLAIN, 16);

        JButton button = new JButton("Clique aqui");
        button.setMaximumSize(dimension);
        button.setFont(font);
        button.setBackground(new Color(255, 255, 255));
        button.setAlignmentX(Component.CENTER_ALIGNMENT);

        mainPanel.add(button);

        button.addActionListener(e -> {
            JOptionPane.showMessageDialog(mainPanel, "Botão foi clicado");
        });

        add(mainPanel);
        setVisible(true);
    }

    public static void main(String[] args) {
        new Class02();
    }

}
