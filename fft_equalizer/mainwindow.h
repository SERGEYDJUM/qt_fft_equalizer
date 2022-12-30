#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLayout>
#include <QFileDialog>
#include <QDebug>
#include <QMediaPlayer>
#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMediaPlayer *player;
    QAudioOutput *audio_output;
private slots:
    void on_selectFileButton_clicked();

    void on_pauseButton_clicked();

    void on_volumeSlider_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
