/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */

#ifndef CLIPBOARD_H
#define CLIPBOARD_H

#include "GDCore/Events/Event.h"
#include "GDCore/Events/Instruction.h"
#include "GDCore/PlatformDefinition/Layout.h"
#include "GDL/ObjectGroup.h"
#include "GDL/Object.h"
#include "GDL/ExternalEvents.h"

//Undefining an annoying macro changing GetObject in GetObjectA
#undef GetObject

class Clipboard
{
public:
    static Clipboard * GetInstance();
    static void DestroySingleton();

    void SetObject( ObjSPtr object );
    ObjSPtr GetObject();
    bool HasObject() { return hasObject; };

    void SetEvents( const std::vector<BaseEventSPtr> & event );
    std::vector<BaseEventSPtr> GetEvents();
    bool HasEvents() { return hasEvents; };

    void SetLayout( const gd::Layout * layout );
    gd::Layout * GetLayout();
    bool HasLayout() { return hasLayout; };

    void SetExternalEvents( const ExternalEvents & events );
    ExternalEvents GetExternalEvents();
    bool HasExternalEvents() { return hasExternalEvents; };

    void SetConditions( const std::vector<Instruction> & conditions );
    void SetActions( const std::vector<Instruction> & actions );

    bool HasCondition() { return hasInstructions && instructionsAreConditions; };
    bool HasAction() { return hasInstructions && !instructionsAreConditions; };
    std::vector<Instruction> GetInstructions() const { return instructionsCopied; };

    void SetObjectGroup( const ObjectGroup & group );
    ObjectGroup GetObjectGroup();
    bool HasObjectGroup() { return hasObjectGroup; };

    void SetPositionsSelection( std::vector < InitialPosition > positionsSelection_ );
    std::vector < InitialPosition > GetPositionsSelection() { return positionsSelection; };
    bool HasPositionsSelection() { return hasPositionsSelection; };

private:
    Clipboard();
    virtual ~Clipboard();

    ObjSPtr objectCopied;
    bool hasObject;

    std::vector<BaseEventSPtr> eventsCopied;
    bool hasEvents;

    std::vector<Instruction> instructionsCopied;
    bool hasInstructions;
    bool instructionsAreConditions;

    ExternalEvents externalEventsCopied;
    bool hasExternalEvents;

    gd::Layout * layoutCopied;
    bool hasLayout;

    ObjectGroup objectGroupCopied;
    bool hasObjectGroup;

    std::vector < InitialPosition > positionsSelection;
    bool hasPositionsSelection;

    static Clipboard *singleton;
};

#endif // CLIPBOARD_H
