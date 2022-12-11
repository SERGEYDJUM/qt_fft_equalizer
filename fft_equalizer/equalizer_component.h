#ifndef EQUALIZER_COMPONENT_H
#define EQUALIZER_COMPONENT_H

#include <QWidget>
#include <QtMultimedia>

class equalizer_component : public QWidget
{
    Q_OBJECT
public:
    explicit equalizer_component(QWidget *parent = nullptr);

signals:

};

#endif // EQUALIZER_COMPONENT_H
