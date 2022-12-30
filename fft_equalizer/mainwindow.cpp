#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    player = new QMediaPlayer;
    audio_output = new QAudioOutput;
    player->setAudioOutput(audio_output);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_selectFileButton_clicked()
{
    player->stop();
    auto filename = QFileDialog::getOpenFileName(this, tr("Open Waveform Audio File"), "/", tr("WAV Files (*.wav)"));
    qDebug() << "[INFO] File selected:" << filename;
    if (filename != "") {
        player->setSource(QUrl::fromLocalFile(filename));
    }
}

void MainWindow::on_pauseButton_clicked()
{
    switch (player->playbackState()) {
    case QMediaPlayer::PlaybackState::StoppedState:
        player->play();
        break;
    case QMediaPlayer::PlaybackState::PausedState:
        player->play();
        break;
    case QMediaPlayer::PlaybackState::PlayingState:
        player->pause();
        break;
    default:
        break;
    }
}


void MainWindow::on_volumeSlider_valueChanged(int value)
{
    audio_output->setVolume(value/100.0);
}

