#pragma once
#include "Controller.h"
#include <handle/HandleDef.h>

namespace Logic
{
    class VisualController : public Controller
    {
    public:
        /**
         * @param world World of the underlaying entity
         * @param entity Entity owning this controller
         */
        VisualController(World::WorldInstance& world, Handle::EntityHandle entity);
        virtual ~VisualController();

        /**
         * Loads the visual from the given name from the worlds VDFS
         * Note: The type must match this class
         * @param visual Filename of the visual. Uncompiled-version of the name!
         */
        virtual bool load(const std::string& visual){return false;};

        /**
         * @brief Called when something else modified the transform of the underlaying entity
         */
        virtual void onTransformChanged();
    protected:

        /**
         * Entites of the visual registered here
         */
        std::vector<Handle::EntityHandle> m_VisualEntities;
    };
}