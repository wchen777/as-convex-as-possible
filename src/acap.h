#pragma once

#include "graphics/shape.h"

#include "geom/mesh.h"

#include "Eigen/StdList"
#include "Eigen/StdVector"
#include <Eigen/SparseCholesky>

#include <unordered_map>
#include <cmath>

class Shader;

class ACAP
{

public:
    void init(Eigen::Vector3f &coeffMin, Eigen::Vector3f &coeffMax);

    void draw(Shader *shader, GLenum mode)
    {
        m_shape.draw(shader, mode);
    }

    int getClosestVertex(Eigen::Vector3f start, Eigen::Vector3f ray, float threshold)
    {
        return m_shape.getClosestVertex(start, ray, threshold);
    }

    SelectMode select(Shader *shader, int vertex)
    {
        return m_shape.select(shader, vertex);
    }

    bool selectWithSpecifiedMode(Shader *shader, int vertex, SelectMode mode)
    {
        return m_shape.selectWithSpecifiedMode(shader, vertex, mode);
    }

    bool getAnchorPos(int lastSelected, Eigen::Vector3f& pos, Eigen::Vector3f ray, Eigen::Vector3f start)
    {
        return m_shape.getAnchorPos(lastSelected, pos, ray, start);
    }

private:
    Shape m_shape;




    // ================== Students, If You Choose To Modify The Code Below, It's On You








};
