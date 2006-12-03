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
 **     class TextureObjChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREOBJCHUNKBASE_H_
#define _OSGTEXTUREOBJCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGTextureBaseChunk.h" // Parent

#include "OSGImageFields.h" // Image type
#include "OSGGLenumFields.h" // InternalFormat type
#include "OSGGLenumFields.h" // ExternalFormat type
#include "OSGBoolFields.h" // Scale type
#include "OSGUInt32Fields.h" // Frame type
#include "OSGGLenumFields.h" // MinFilter type
#include "OSGGLenumFields.h" // MagFilter type
#include "OSGGLenumFields.h" // WrapS type
#include "OSGGLenumFields.h" // WrapT type
#include "OSGGLenumFields.h" // WrapR type
#include "OSGGLenumFields.h" // GLId type
#include "OSGInt32Fields.h" // IgnoreGLForAspect type
#include "OSGReal32Fields.h" // Priority type
#include "OSGInt32Fields.h" // DirtyLeft type
#include "OSGInt32Fields.h" // DirtyMinX type
#include "OSGInt32Fields.h" // DirtyMaxX type
#include "OSGInt32Fields.h" // DirtyMinY type
#include "OSGInt32Fields.h" // DirtyMaxY type
#include "OSGInt32Fields.h" // DirtyMinZ type
#include "OSGInt32Fields.h" // DirtyMaxZ type
#include "OSGReal32Fields.h" // Anisotropy type
#include "OSGColor4fFields.h" // BorderColor type
#include "OSGGLenumFields.h" // CompareMode type
#include "OSGGLenumFields.h" // CompareFunc type
#include "OSGGLenumFields.h" // DepthMode type

#include "OSGTextureObjChunkFields.h"

OSG_BEGIN_NAMESPACE

class TextureObjChunk;

//! \brief TextureObjChunk Base Class.

class OSG_SYSTEM_DLLMAPPING TextureObjChunkBase : public TextureBaseChunk
{
  public:

    typedef TextureBaseChunk Inherited;
    typedef TextureBaseChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<TextureBaseChunkPtr,
                              TextureBaseChunkConstPtr,
                              TextureObjChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<TextureBaseChunkPtr,
                              TextureBaseChunkConstPtr,
                              TextureObjChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<TextureBaseChunkPtr,
                              TextureBaseChunkConstPtr,
                              TextureObjChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<TextureBaseChunkPtr,
                              TextureBaseChunkConstPtr,
                              TextureObjChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<TextureBaseChunkPtr,
                              TextureBaseChunkConstPtr,
                              TextureObjChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<TextureBaseChunkPtr,
                              TextureBaseChunkConstPtr,
                              TextureObjChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ImageFieldId = Inherited::NextFieldId,
        InternalFormatFieldId = ImageFieldId + 1,
        ExternalFormatFieldId = InternalFormatFieldId + 1,
        ScaleFieldId = ExternalFormatFieldId + 1,
        FrameFieldId = ScaleFieldId + 1,
        MinFilterFieldId = FrameFieldId + 1,
        MagFilterFieldId = MinFilterFieldId + 1,
        WrapSFieldId = MagFilterFieldId + 1,
        WrapTFieldId = WrapSFieldId + 1,
        WrapRFieldId = WrapTFieldId + 1,
        GLIdFieldId = WrapRFieldId + 1,
        IgnoreGLForAspectFieldId = GLIdFieldId + 1,
        PriorityFieldId = IgnoreGLForAspectFieldId + 1,
        DirtyLeftFieldId = PriorityFieldId + 1,
        DirtyMinXFieldId = DirtyLeftFieldId + 1,
        DirtyMaxXFieldId = DirtyMinXFieldId + 1,
        DirtyMinYFieldId = DirtyMaxXFieldId + 1,
        DirtyMaxYFieldId = DirtyMinYFieldId + 1,
        DirtyMinZFieldId = DirtyMaxYFieldId + 1,
        DirtyMaxZFieldId = DirtyMinZFieldId + 1,
        AnisotropyFieldId = DirtyMaxZFieldId + 1,
        BorderColorFieldId = AnisotropyFieldId + 1,
        CompareModeFieldId = BorderColorFieldId + 1,
        CompareFuncFieldId = CompareModeFieldId + 1,
        DepthModeFieldId = CompareFuncFieldId + 1,
        NextFieldId = DepthModeFieldId + 1
    };

    static const OSG::BitVector ImageFieldMask =
        (TypeTraits<BitVector>::One << ImageFieldId);
    static const OSG::BitVector InternalFormatFieldMask =
        (TypeTraits<BitVector>::One << InternalFormatFieldId);
    static const OSG::BitVector ExternalFormatFieldMask =
        (TypeTraits<BitVector>::One << ExternalFormatFieldId);
    static const OSG::BitVector ScaleFieldMask =
        (TypeTraits<BitVector>::One << ScaleFieldId);
    static const OSG::BitVector FrameFieldMask =
        (TypeTraits<BitVector>::One << FrameFieldId);
    static const OSG::BitVector MinFilterFieldMask =
        (TypeTraits<BitVector>::One << MinFilterFieldId);
    static const OSG::BitVector MagFilterFieldMask =
        (TypeTraits<BitVector>::One << MagFilterFieldId);
    static const OSG::BitVector WrapSFieldMask =
        (TypeTraits<BitVector>::One << WrapSFieldId);
    static const OSG::BitVector WrapTFieldMask =
        (TypeTraits<BitVector>::One << WrapTFieldId);
    static const OSG::BitVector WrapRFieldMask =
        (TypeTraits<BitVector>::One << WrapRFieldId);
    static const OSG::BitVector GLIdFieldMask =
        (TypeTraits<BitVector>::One << GLIdFieldId);
    static const OSG::BitVector IgnoreGLForAspectFieldMask =
        (TypeTraits<BitVector>::One << IgnoreGLForAspectFieldId);
    static const OSG::BitVector PriorityFieldMask =
        (TypeTraits<BitVector>::One << PriorityFieldId);
    static const OSG::BitVector DirtyLeftFieldMask =
        (TypeTraits<BitVector>::One << DirtyLeftFieldId);
    static const OSG::BitVector DirtyMinXFieldMask =
        (TypeTraits<BitVector>::One << DirtyMinXFieldId);
    static const OSG::BitVector DirtyMaxXFieldMask =
        (TypeTraits<BitVector>::One << DirtyMaxXFieldId);
    static const OSG::BitVector DirtyMinYFieldMask =
        (TypeTraits<BitVector>::One << DirtyMinYFieldId);
    static const OSG::BitVector DirtyMaxYFieldMask =
        (TypeTraits<BitVector>::One << DirtyMaxYFieldId);
    static const OSG::BitVector DirtyMinZFieldMask =
        (TypeTraits<BitVector>::One << DirtyMinZFieldId);
    static const OSG::BitVector DirtyMaxZFieldMask =
        (TypeTraits<BitVector>::One << DirtyMaxZFieldId);
    static const OSG::BitVector AnisotropyFieldMask =
        (TypeTraits<BitVector>::One << AnisotropyFieldId);
    static const OSG::BitVector BorderColorFieldMask =
        (TypeTraits<BitVector>::One << BorderColorFieldId);
    static const OSG::BitVector CompareModeFieldMask =
        (TypeTraits<BitVector>::One << CompareModeFieldId);
    static const OSG::BitVector CompareFuncFieldMask =
        (TypeTraits<BitVector>::One << CompareFuncFieldId);
    static const OSG::BitVector DepthModeFieldMask =
        (TypeTraits<BitVector>::One << DepthModeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFImagePtr          *getSFImage           (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFInternalFormat  (void);
#endif
                  SFGLenum            *editSFInternalFormat (void);
            const SFGLenum            *getSFInternalFormat  (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFExternalFormat  (void);
#endif
                  SFGLenum            *editSFExternalFormat (void);
            const SFGLenum            *getSFExternalFormat  (void) const;

#ifdef OSG_1_COMPAT
                  SFBool              *getSFScale           (void);
#endif
                  SFBool              *editSFScale          (void);
            const SFBool              *getSFScale           (void) const;

#ifdef OSG_1_COMPAT
                  SFUInt32            *getSFFrame           (void);
#endif
                  SFUInt32            *editSFFrame          (void);
            const SFUInt32            *getSFFrame           (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFMinFilter       (void);
#endif
                  SFGLenum            *editSFMinFilter      (void);
            const SFGLenum            *getSFMinFilter       (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFMagFilter       (void);
#endif
                  SFGLenum            *editSFMagFilter      (void);
            const SFGLenum            *getSFMagFilter       (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFWrapS           (void);
#endif
                  SFGLenum            *editSFWrapS          (void);
            const SFGLenum            *getSFWrapS           (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFWrapT           (void);
#endif
                  SFGLenum            *editSFWrapT          (void);
            const SFGLenum            *getSFWrapT           (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFWrapR           (void);
#endif
                  SFGLenum            *editSFWrapR          (void);
            const SFGLenum            *getSFWrapR           (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFGLId            (void);
#endif
                  SFGLenum            *editSFGLId           (void);
            const SFGLenum            *getSFGLId            (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFIgnoreGLForAspect (void);
#endif
                  SFInt32             *editSFIgnoreGLForAspect(void);
            const SFInt32             *getSFIgnoreGLForAspect (void) const;

#ifdef OSG_1_COMPAT
                  SFReal32            *getSFPriority        (void);
#endif
                  SFReal32            *editSFPriority       (void);
            const SFReal32            *getSFPriority        (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFDirtyLeft       (void);
#endif
                  SFInt32             *editSFDirtyLeft      (void);
            const SFInt32             *getSFDirtyLeft       (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFDirtyMinX       (void);
#endif
                  SFInt32             *editSFDirtyMinX      (void);
            const SFInt32             *getSFDirtyMinX       (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFDirtyMaxX       (void);
#endif
                  SFInt32             *editSFDirtyMaxX      (void);
            const SFInt32             *getSFDirtyMaxX       (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFDirtyMinY       (void);
#endif
                  SFInt32             *editSFDirtyMinY      (void);
            const SFInt32             *getSFDirtyMinY       (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFDirtyMaxY       (void);
#endif
                  SFInt32             *editSFDirtyMaxY      (void);
            const SFInt32             *getSFDirtyMaxY       (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFDirtyMinZ       (void);
#endif
                  SFInt32             *editSFDirtyMinZ      (void);
            const SFInt32             *getSFDirtyMinZ       (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFDirtyMaxZ       (void);
#endif
                  SFInt32             *editSFDirtyMaxZ      (void);
            const SFInt32             *getSFDirtyMaxZ       (void) const;

#ifdef OSG_1_COMPAT
                  SFReal32            *getSFAnisotropy      (void);
#endif
                  SFReal32            *editSFAnisotropy     (void);
            const SFReal32            *getSFAnisotropy      (void) const;

#ifdef OSG_1_COMPAT
                  SFColor4f           *getSFBorderColor     (void);
#endif
                  SFColor4f           *editSFBorderColor    (void);
            const SFColor4f           *getSFBorderColor     (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFCompareMode     (void);
#endif
                  SFGLenum            *editSFCompareMode    (void);
            const SFGLenum            *getSFCompareMode     (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFCompareFunc     (void);
#endif
                  SFGLenum            *editSFCompareFunc    (void);
            const SFGLenum            *getSFCompareFunc     (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFDepthMode       (void);
#endif
                  SFGLenum            *editSFDepthMode      (void);
            const SFGLenum            *getSFDepthMode       (void) const;


                  ImagePtrConst getImage          (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getInternalFormat  (void);
#endif
                  GLenum              &editInternalFormat (void);
            const GLenum              &getInternalFormat  (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getExternalFormat  (void);
#endif
                  GLenum              &editExternalFormat (void);
            const GLenum              &getExternalFormat  (void) const;

#ifdef OSG_1_COMPAT
                  bool                &getScale           (void);
#endif
                  bool                &editScale          (void);
            const bool                &getScale           (void) const;

#ifdef OSG_1_COMPAT
                  UInt32              &getFrame           (void);
#endif
                  UInt32              &editFrame          (void);
            const UInt32              &getFrame           (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getMinFilter       (void);
#endif
                  GLenum              &editMinFilter      (void);
            const GLenum              &getMinFilter       (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getMagFilter       (void);
#endif
                  GLenum              &editMagFilter      (void);
            const GLenum              &getMagFilter       (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getWrapS           (void);
#endif
                  GLenum              &editWrapS          (void);
            const GLenum              &getWrapS           (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getWrapT           (void);
#endif
                  GLenum              &editWrapT          (void);
            const GLenum              &getWrapT           (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getWrapR           (void);
#endif
                  GLenum              &editWrapR          (void);
            const GLenum              &getWrapR           (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getGLId            (void);
#endif
                  GLenum              &editGLId           (void);
            const GLenum              &getGLId            (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getIgnoreGLForAspect (void);
#endif
                  Int32               &editIgnoreGLForAspect(void);
            const Int32               &getIgnoreGLForAspect (void) const;

#ifdef OSG_1_COMPAT
                  Real32              &getPriority        (void);
#endif
                  Real32              &editPriority       (void);
            const Real32              &getPriority        (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getDirtyLeft       (void);
#endif
                  Int32               &editDirtyLeft      (void);
            const Int32               &getDirtyLeft       (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getDirtyMinX       (void);
#endif
                  Int32               &editDirtyMinX      (void);
            const Int32               &getDirtyMinX       (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getDirtyMaxX       (void);
#endif
                  Int32               &editDirtyMaxX      (void);
            const Int32               &getDirtyMaxX       (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getDirtyMinY       (void);
#endif
                  Int32               &editDirtyMinY      (void);
            const Int32               &getDirtyMinY       (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getDirtyMaxY       (void);
#endif
                  Int32               &editDirtyMaxY      (void);
            const Int32               &getDirtyMaxY       (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getDirtyMinZ       (void);
#endif
                  Int32               &editDirtyMinZ      (void);
            const Int32               &getDirtyMinZ       (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getDirtyMaxZ       (void);
#endif
                  Int32               &editDirtyMaxZ      (void);
            const Int32               &getDirtyMaxZ       (void) const;

#ifdef OSG_1_COMPAT
                  Real32              &getAnisotropy      (void);
#endif
                  Real32              &editAnisotropy     (void);
            const Real32              &getAnisotropy      (void) const;

#ifdef OSG_1_COMPAT
                  Color4f             &getBorderColor     (void);
#endif
                  Color4f             &editBorderColor    (void);
            const Color4f             &getBorderColor     (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getCompareMode     (void);
#endif
                  GLenum              &editCompareMode    (void);
            const GLenum              &getCompareMode     (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getCompareFunc     (void);
#endif
                  GLenum              &editCompareFunc    (void);
            const GLenum              &getCompareFunc     (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getDepthMode       (void);
#endif
                  GLenum              &editDepthMode      (void);
            const GLenum              &getDepthMode       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setImage          (ImagePtrConstArg value);
            void setInternalFormat (const GLenum &value);
            void setExternalFormat (const GLenum &value);
            void setScale          (const bool &value);
            void setFrame          (const UInt32 &value);
            void setMinFilter      (const GLenum &value);
            void setMagFilter      (const GLenum &value);
            void setWrapS          (const GLenum &value);
            void setWrapT          (const GLenum &value);
            void setWrapR          (const GLenum &value);
            void setGLId           (const GLenum &value);
            void setIgnoreGLForAspect(const Int32 &value);
            void setPriority       (const Real32 &value);
            void setDirtyLeft      (const Int32 &value);
            void setDirtyMinX      (const Int32 &value);
            void setDirtyMaxX      (const Int32 &value);
            void setDirtyMinY      (const Int32 &value);
            void setDirtyMaxY      (const Int32 &value);
            void setDirtyMinZ      (const Int32 &value);
            void setDirtyMaxZ      (const Int32 &value);
            void setAnisotropy     (const Real32 &value);
            void setBorderColor    (const Color4f &value);
            void setCompareMode    (const GLenum &value);
            void setCompareFunc    (const GLenum &value);
            void setDepthMode      (const GLenum &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    virtual void pushToField     (      FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void insertIntoMField(const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (const UInt32                    uiIndex,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                        FieldContainerPtrConstArg pNewElement,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(const UInt32                    uiIndex,
                                  const UInt32                    uiFieldId  );

    virtual void removeFromMField(      FieldContainerPtrConstArg pElement,
                                  const UInt32                    uiFieldId  );

    virtual void clearField      (const UInt32                    uiFieldId  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TextureObjChunkPtr create     (void);
    static  TextureObjChunkPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFImagePtr        _sfImage;
    SFGLenum          _sfInternalFormat;
    SFGLenum          _sfExternalFormat;
    SFBool            _sfScale;
    SFUInt32          _sfFrame;
    SFGLenum          _sfMinFilter;
    SFGLenum          _sfMagFilter;
    SFGLenum          _sfWrapS;
    SFGLenum          _sfWrapT;
    SFGLenum          _sfWrapR;
    SFGLenum          _sfGLId;
    SFInt32           _sfIgnoreGLForAspect;
    SFReal32          _sfPriority;
    SFInt32           _sfDirtyLeft;
    SFInt32           _sfDirtyMinX;
    SFInt32           _sfDirtyMaxX;
    SFInt32           _sfDirtyMinY;
    SFInt32           _sfDirtyMaxY;
    SFInt32           _sfDirtyMinZ;
    SFInt32           _sfDirtyMaxZ;
    SFReal32          _sfAnisotropy;
    SFColor4f         _sfBorderColor;
    SFGLenum          _sfCompareMode;
    SFGLenum          _sfCompareFunc;
    SFGLenum          _sfDepthMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureObjChunkBase(void);
    TextureObjChunkBase(const TextureObjChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureObjChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextureObjChunk *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      TextureObjChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TextureObjChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextureObjChunkBase &source);
};

typedef TextureObjChunkBase *TextureObjChunkBaseP;

/** Type specific RefPtr type for TextureObjChunk. */
typedef RefPtr<TextureObjChunkPtr> TextureObjChunkRefPtr;

typedef osgIF<
    TextureObjChunkBase::isNodeCore,

    CoredNodePtr<TextureObjChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        TextureObjChunkNodePtr;

OSG_END_NAMESPACE

#define OSGTEXTUREOBJCHUNKBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGTEXTUREOBJCHUNKBASE_H_ */
