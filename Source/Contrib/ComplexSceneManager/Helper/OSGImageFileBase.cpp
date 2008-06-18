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
 **     class ImageFile!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEIMAGEFILEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGImageFileBase.h"
#include "OSGImageFile.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ImageFile
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ImageFileBase::_sfUrl
    
*/


void ImageFileBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "url",
        "",
        UrlFieldId, UrlFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ImageFile::editHandleUrl),
        static_cast<FieldGetMethodSig >(&ImageFile::getHandleUrl));

    oType.addInitialDesc(pDesc);
}


ImageFileBase::TypeObject ImageFileBase::_type(
    ImageFileBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ImageFileBase::createEmptyLocal),
    ImageFile::initMethod,
    ImageFile::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ImageFileBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ImageFile\"\n"
    "    parent=\"Image\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"url\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ImageFileBase::getType(void)
{
    return _type;
}

const FieldContainerType &ImageFileBase::getType(void) const
{
    return _type;
}

UInt32 ImageFileBase::getContainerSize(void) const
{
    return sizeof(ImageFile);
}

/*------------------------- decorator get ------------------------------*/


SFString *ImageFileBase::editSFUrl(void)
{
    editSField(UrlFieldMask);

    return &_sfUrl;
}

const SFString *ImageFileBase::getSFUrl(void) const
{
    return &_sfUrl;
}






/*------------------------------ access -----------------------------------*/

UInt32 ImageFileBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        returnValue += _sfUrl.getBinSize();
    }

    return returnValue;
}

void ImageFileBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _sfUrl.copyToBin(pMem);
    }
}

void ImageFileBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UrlFieldMask & whichField))
    {
        _sfUrl.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ImageFileTransitPtr ImageFileBase::createLocal(BitVector bFlags)
{
    ImageFileTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ImageFile>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ImageFileTransitPtr ImageFileBase::create(void)
{
    ImageFileTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ImageFile>(tmpPtr);
    }

    return fc;
}

ImageFile *ImageFileBase::createEmptyLocal(BitVector bFlags)
{
    ImageFile *returnValue;

    newPtr<ImageFile>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ImageFile *ImageFileBase::createEmpty(void)
{
    ImageFile *returnValue;

    newPtr<ImageFile>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ImageFileBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ImageFile *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ImageFile *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ImageFileBase::shallowCopy(void) const
{
    ImageFile *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ImageFile *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ImageFileBase::ImageFileBase(void) :
    Inherited(),
    _sfUrl                    ()
{
}

ImageFileBase::ImageFileBase(const ImageFileBase &source) :
    Inherited(source),
    _sfUrl                    (source._sfUrl                    )
{
}


/*-------------------------- destructors ----------------------------------*/

ImageFileBase::~ImageFileBase(void)
{
}


GetFieldHandlePtr ImageFileBase::getHandleUrl             (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfUrl,
             this->getType().getFieldDesc(UrlFieldId)));

    return returnValue;
}

EditFieldHandlePtr ImageFileBase::editHandleUrl            (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfUrl,
             this->getType().getFieldDesc(UrlFieldId)));


    editSField(UrlFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ImageFileBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ImageFileBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ImageFileBase::createAspectCopy(void) const
{
    ImageFile *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ImageFile *>(this));

    return returnValue;
}
#endif

void ImageFileBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ImageFile *>::_type("ImageFilePtr", "ImagePtr");
#endif


OSG_END_NAMESPACE
