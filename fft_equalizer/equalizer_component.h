#ifndef EQUALIZER_COMPONENT_H
#define EQUALIZER_COMPONENT_H

#include <QWidget>
#include <QtMultimedia>

class Equalizer : public QWidget
{
    Q_OBJECT
public:
    explicit Equalizer(QWidget *parent = nullptr);

signals:

};

#endif // EQUALIZER_COMPONENT_H
