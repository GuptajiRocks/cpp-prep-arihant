//
// Created by ariha on 26-12-2024.
//
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QTimer>

class SecureQuiz : public QWidget {
    Q_OBJECT
    bool testComplete = false;

public:
    SecureQuiz() {
        setWindowTitle("Secure Quiz");
        setFixedSize(600, 400);

        QVBoxLayout *layout = new QVBoxLayout(this);

        QLabel *question1 = new QLabel("1. What is the capital of France?");
        layout->addWidget(question1);

        QPushButton *answer1 = new QPushButton("Paris");
        layout->addWidget(answer1);

        QLabel *question2 = new QLabel("2. What is 2 + 2?");
        layout->addWidget(question2);

        QPushButton *answer2 = new QPushButton("4");
        layout->addWidget(answer2);

        QPushButton *submit = new QPushButton("Submit");
        layout->addWidget(submit);

        connect(answer1, &QPushButton::clicked, []() {
            QMessageBox::information(nullptr, "Answer", "Correct!");
        });

        connect(answer2, &QPushButton::clicked, []() {
            QMessageBox::information(nullptr, "Answer", "Correct!");
        });

        connect(submit, &QPushButton::clicked, [this]() {
            QMessageBox::information(this, "Results", "You scored 2/2!");
            testComplete = true;
            QApplication::quit();
        });

        QTimer::singleShot(15000, [this]() {
            if (!testComplete) {
                QMessageBox::information(this, "Time's Up", "Time is up. Submitting automatically.");
                QApplication::quit();
            }
        });
    }

protected:
    void closeEvent(QCloseEvent *event) override {
        QMessageBox::warning(this, "Warning", "You cannot close the application!");
        event->ignore();
    }

    void focusOutEvent(QFocusEvent *event) override {
        QMessageBox::critical(this, "Alert", "Focus lost. Exiting the test.");
        QApplication::quit();
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    SecureQuiz quiz;
    quiz.showFullScreen();

    return app.exec();
}

#include "securequiz.moc"

