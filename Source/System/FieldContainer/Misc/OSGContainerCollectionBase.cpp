/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ContainerCollection!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECONTAINERCOLLECTIONINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFieldContainer.h> // Containers Class

#include "OSGContainerCollectionBase.h"
#include "OSGContainerCollection.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ContainerCollection
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ContainerCollectionBase::_sfName
    The name of the container collection.  Can be used to identify collections.
*/

/*! \var FieldContainer * ContainerCollectionBase::_mfContainers
    A list of containers held in the collection.
*/


void ContainerCollectionBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "name",
        "The name of the container collection.  Can be used to identify collections.\n",
        NameFieldId, NameFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ContainerCollection::editHandleName),
        static_cast<FieldGetMethodSig >(&ContainerCollection::getHandleName));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecFieldContainerPtr::Description(
        MFUnrecFieldContainerPtr::getClassType(),
        "containers",
        "A list of containers held in the collection.\n",
        ContainersFieldId, ContainersFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ContainerCollection::editHandleContainers),
        static_cast<FieldGetMethodSig >(&ContainerCollection::getHandleContainers));

    oType.addInitialDesc(pDesc);
}


ContainerCollectionBase::TypeObject ContainerCollectionBase::_type(
    ContainerCollectionBase::getClassname(),
    Inherited::getClassname(),
    "ContainerCollection",
    0,
    reinterpret_cast<PrototypeCreateF>(&ContainerCollectionBase::createEmptyLocal),
    ContainerCollection::initMethod,
    ContainerCollection::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ContainerCollectionBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ContainerCollection\"\n"
    "\tparent=\"Attachment\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"name\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe name of the container collection.  Can be used to identify collections.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"containers\"\n"
    "\t\ttype=\"FieldContainerPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "                access=\"public\"\n"
    "\t>\n"
    "        A list of containers held in the collection.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ContainerCollectionBase::getType(void)
{
    return _type;
}

const FieldContainerType &ContainerCollectionBase::getType(void) const
{
    return _type;
}

UInt32 ContainerCollectionBase::getContainerSize(void) const
{
    return sizeof(ContainerCollection);
}

/*------------------------- decorator get ------------------------------*/


SFString *ContainerCollectionBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *ContainerCollectionBase::getSFName(void) const
{
    return &_sfName;
}


//! Get the ContainerCollection::_mfContainers field.
const MFUnrecFieldContainerPtr *ContainerCollectionBase::getMFContainers(void) const
{
    return &_mfContainers;
}

MFUnrecFieldContainerPtr *ContainerCollectionBase::editMFContainers     (void)
{
    editMField(ContainersFieldMask, _mfContainers);

    return &_mfContainers;
}



void ContainerCollectionBase::pushToContainers(FieldContainer * const value)
{
    editMField(ContainersFieldMask, _mfContainers);

    _mfContainers.push_back(value);
}

void ContainerCollectionBase::assignContainers(const MFUnrecFieldContainerPtr &value)
{
    MFUnrecFieldContainerPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecFieldContainerPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ContainerCollection *>(this)->clearContainers();

    while(elemIt != elemEnd)
    {
        this->pushToContainers(*elemIt);

        ++elemIt;
    }
}

void ContainerCollectionBase::removeFromContainers(UInt32 uiIndex)
{
    if(uiIndex < _mfContainers.size())
    {
        editMField(ContainersFieldMask, _mfContainers);

        MFUnrecFieldContainerPtr::iterator fieldIt = _mfContainers.begin_nc();

        fieldIt += uiIndex;

        _mfContainers.erase(fieldIt);
    }
}

void ContainerCollectionBase::removeObjFromContainers(FieldContainer * const value)
{
    Int32 iElemIdx = _mfContainers.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ContainersFieldMask, _mfContainers);

        MFUnrecFieldContainerPtr::iterator fieldIt = _mfContainers.begin_nc();

        fieldIt += iElemIdx;

        _mfContainers.erase(fieldIt);
    }
}
void ContainerCollectionBase::clearContainers(void)
{
    editMField(ContainersFieldMask, _mfContainers);


    _mfContainers.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ContainerCollectionBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        returnValue += _mfContainers.getBinSize();
    }

    return returnValue;
}

void ContainerCollectionBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        _mfContainers.copyToBin(pMem);
    }
}

void ContainerCollectionBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContainersFieldMask & whichField))
    {
        _mfContainers.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ContainerCollectionTransitPtr ContainerCollectionBase::createLocal(BitVector bFlags)
{
    ContainerCollectionTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ContainerCollection>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ContainerCollectionTransitPtr ContainerCollectionBase::create(void)
{
    ContainerCollectionTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ContainerCollection>(tmpPtr);
    }

    return fc;
}

ContainerCollection *ContainerCollectionBase::createEmptyLocal(BitVector bFlags)
{
    ContainerCollection *returnValue;

    newPtr<ContainerCollection>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ContainerCollection *ContainerCollectionBase::createEmpty(void)
{
    ContainerCollection *returnValue;

    newPtr<ContainerCollection>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ContainerCollectionBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ContainerCollection *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ContainerCollection *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ContainerCollectionBase::shallowCopy(void) const
{
    ContainerCollection *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ContainerCollection *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ContainerCollectionBase::ContainerCollectionBase(void) :
    Inherited(),
    _sfName                   (),
    _mfContainers             ()
{
}

ContainerCollectionBase::ContainerCollectionBase(const ContainerCollectionBase &source) :
    Inherited(source),
    _sfName                   (source._sfName                   ),
    _mfContainers             ()
{
}


/*-------------------------- destructors ----------------------------------*/

ContainerCollectionBase::~ContainerCollectionBase(void)
{
}

void ContainerCollectionBase::onCreate(const ContainerCollection *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ContainerCollection *pThis = static_cast<ContainerCollection *>(this);

        MFUnrecFieldContainerPtr::const_iterator ContainersIt  =
            source->_mfContainers.begin();
        MFUnrecFieldContainerPtr::const_iterator ContainersEnd =
            source->_mfContainers.end  ();

        while(ContainersIt != ContainersEnd)
        {
            pThis->pushToContainers(*ContainersIt);

            ++ContainersIt;
        }
    }
}

GetFieldHandlePtr ContainerCollectionBase::getHandleName            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfName,
             this->getType().getFieldDesc(NameFieldId)));

    return returnValue;
}

EditFieldHandlePtr ContainerCollectionBase::editHandleName           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfName,
             this->getType().getFieldDesc(NameFieldId)));


    editSField(NameFieldMask);

    return returnValue;
}

GetFieldHandlePtr ContainerCollectionBase::getHandleContainers      (void) const
{
    MFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::GetHandle(
             &_mfContainers,
             this->getType().getFieldDesc(ContainersFieldId)));

    return returnValue;
}

EditFieldHandlePtr ContainerCollectionBase::editHandleContainers     (void)
{
    MFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::EditHandle(
             &_mfContainers,
             this->getType().getFieldDesc(ContainersFieldId)));

    returnValue->setAddMethod(
        boost::bind(&ContainerCollection::pushToContainers,
                    static_cast<ContainerCollection *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ContainerCollection::removeFromContainers,
                    static_cast<ContainerCollection *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ContainerCollection::removeObjFromContainers,
                    static_cast<ContainerCollection *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ContainerCollection::clearContainers,
                    static_cast<ContainerCollection *>(this)));

    editMField(ContainersFieldMask, _mfContainers);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ContainerCollectionBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ContainerCollectionBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ContainerCollectionBase::createAspectCopy(void) const
{
    ContainerCollection *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ContainerCollection *>(this));

    return returnValue;
}
#endif

void ContainerCollectionBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<ContainerCollection *>(this)->clearContainers();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ContainerCollection *>::_type("ContainerCollectionPtr", "AttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ContainerCollection *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ContainerCollection *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ContainerCollection *,
                           0);

OSG_END_NAMESPACE
