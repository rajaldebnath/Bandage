//Copyright 2015 Ryan Wick

//This file is part of Bandage

//Bandage is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//Bandage is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with Bandage.  If not, see <http://www.gnu.org/licenses/>.


#ifndef MYGRAPHICSSCENE_H
#define MYGRAPHICSSCENE_H

#include <QGraphicsScene>
#include <vector>

class DeBruijnNode;
class DeBruijnEdge;
class GraphicsItemNode;

class MyGraphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit MyGraphicsScene(QObject *parent = 0);
    std::vector<DeBruijnNode *> getSelectedNodes();
    std::vector<GraphicsItemNode *> getSelectedGraphicsItemNodes();
    std::vector<DeBruijnEdge *> getSelectedEdges();
    DeBruijnNode * getOneSelectedNode();
    DeBruijnEdge * getOneSelectedEdge();
    double getTopZValue();

signals:

public slots:

};

#endif // MYGRAPHICSSCENE_H
