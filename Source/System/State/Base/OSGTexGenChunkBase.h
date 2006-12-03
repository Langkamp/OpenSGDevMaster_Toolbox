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
 **     class TexGenChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXGENCHUNKBASE_H_
#define _OSGTEXGENCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGGLenumFields.h" // GenFuncS type
#include "OSGGLenumFields.h" // GenFuncT type
#include "OSGGLenumFields.h" // GenFuncR type
#include "OSGGLenumFields.h" // GenFuncQ type
#include "OSGVec4fFields.h" // GenFuncSPlane type
#include "OSGVec4fFields.h" // GenFuncTPlane type
#include "OSGVec4fFields.h" // GenFuncRPlane type
#include "OSGVec4fFields.h" // GenFuncQPlane type
#include "OSGNodeFields.h" // SBeacon type
#include "OSGNodeFields.h" // TBeacon type
#include "OSGNodeFields.h" // RBeacon type
#include "OSGNodeFields.h" // QBeacon type

#include "OSGTexGenChunkFields.h"

OSG_BEGIN_NAMESPACE

class TexGenChunk;

//! \brief TexGenChunk Base Class.

class OSG_SYSTEM_DLLMAPPING TexGenChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              TexGenChunk>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              TexGenChunk>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              TexGenChunk>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              TexGenChunk>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              TexGenChunk>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<StateChunkPtr,
                              StateChunkConstPtr,
                              TexGenChunk>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        GenFuncSFieldId = Inherited::NextFieldId,
        GenFuncTFieldId = GenFuncSFieldId + 1,
        GenFuncRFieldId = GenFuncTFieldId + 1,
        GenFuncQFieldId = GenFuncRFieldId + 1,
        GenFuncSPlaneFieldId = GenFuncQFieldId + 1,
        GenFuncTPlaneFieldId = GenFuncSPlaneFieldId + 1,
        GenFuncRPlaneFieldId = GenFuncTPlaneFieldId + 1,
        GenFuncQPlaneFieldId = GenFuncRPlaneFieldId + 1,
        SBeaconFieldId = GenFuncQPlaneFieldId + 1,
        TBeaconFieldId = SBeaconFieldId + 1,
        RBeaconFieldId = TBeaconFieldId + 1,
        QBeaconFieldId = RBeaconFieldId + 1,
        NextFieldId = QBeaconFieldId + 1
    };

    static const OSG::BitVector GenFuncSFieldMask =
        (TypeTraits<BitVector>::One << GenFuncSFieldId);
    static const OSG::BitVector GenFuncTFieldMask =
        (TypeTraits<BitVector>::One << GenFuncTFieldId);
    static const OSG::BitVector GenFuncRFieldMask =
        (TypeTraits<BitVector>::One << GenFuncRFieldId);
    static const OSG::BitVector GenFuncQFieldMask =
        (TypeTraits<BitVector>::One << GenFuncQFieldId);
    static const OSG::BitVector GenFuncSPlaneFieldMask =
        (TypeTraits<BitVector>::One << GenFuncSPlaneFieldId);
    static const OSG::BitVector GenFuncTPlaneFieldMask =
        (TypeTraits<BitVector>::One << GenFuncTPlaneFieldId);
    static const OSG::BitVector GenFuncRPlaneFieldMask =
        (TypeTraits<BitVector>::One << GenFuncRPlaneFieldId);
    static const OSG::BitVector GenFuncQPlaneFieldMask =
        (TypeTraits<BitVector>::One << GenFuncQPlaneFieldId);
    static const OSG::BitVector SBeaconFieldMask =
        (TypeTraits<BitVector>::One << SBeaconFieldId);
    static const OSG::BitVector TBeaconFieldMask =
        (TypeTraits<BitVector>::One << TBeaconFieldId);
    static const OSG::BitVector RBeaconFieldMask =
        (TypeTraits<BitVector>::One << RBeaconFieldId);
    static const OSG::BitVector QBeaconFieldMask =
        (TypeTraits<BitVector>::One << QBeaconFieldId);
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


#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFGenFuncS        (void);
#endif
                  SFGLenum            *editSFGenFuncS       (void);
            const SFGLenum            *getSFGenFuncS        (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFGenFuncT        (void);
#endif
                  SFGLenum            *editSFGenFuncT       (void);
            const SFGLenum            *getSFGenFuncT        (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFGenFuncR        (void);
#endif
                  SFGLenum            *editSFGenFuncR       (void);
            const SFGLenum            *getSFGenFuncR        (void) const;

#ifdef OSG_1_COMPAT
                  SFGLenum            *getSFGenFuncQ        (void);
#endif
                  SFGLenum            *editSFGenFuncQ       (void);
            const SFGLenum            *getSFGenFuncQ        (void) const;

#ifdef OSG_1_COMPAT
                  SFVec4f             *getSFGenFuncSPlane   (void);
#endif
                  SFVec4f             *editSFGenFuncSPlane  (void);
            const SFVec4f             *getSFGenFuncSPlane   (void) const;

#ifdef OSG_1_COMPAT
                  SFVec4f             *getSFGenFuncTPlane   (void);
#endif
                  SFVec4f             *editSFGenFuncTPlane  (void);
            const SFVec4f             *getSFGenFuncTPlane   (void) const;

#ifdef OSG_1_COMPAT
                  SFVec4f             *getSFGenFuncRPlane   (void);
#endif
                  SFVec4f             *editSFGenFuncRPlane  (void);
            const SFVec4f             *getSFGenFuncRPlane   (void) const;

#ifdef OSG_1_COMPAT
                  SFVec4f             *getSFGenFuncQPlane   (void);
#endif
                  SFVec4f             *editSFGenFuncQPlane  (void);
            const SFVec4f             *getSFGenFuncQPlane   (void) const;
            const SFNodePtr           *getSFSBeacon         (void) const;
            const SFNodePtr           *getSFTBeacon         (void) const;
            const SFNodePtr           *getSFRBeacon         (void) const;
            const SFNodePtr           *getSFQBeacon         (void) const;


#ifdef OSG_1_COMPAT
                  GLenum              &getGenFuncS        (void);
#endif
                  GLenum              &editGenFuncS       (void);
            const GLenum              &getGenFuncS        (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getGenFuncT        (void);
#endif
                  GLenum              &editGenFuncT       (void);
            const GLenum              &getGenFuncT        (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getGenFuncR        (void);
#endif
                  GLenum              &editGenFuncR       (void);
            const GLenum              &getGenFuncR        (void) const;

#ifdef OSG_1_COMPAT
                  GLenum              &getGenFuncQ        (void);
#endif
                  GLenum              &editGenFuncQ       (void);
            const GLenum              &getGenFuncQ        (void) const;

#ifdef OSG_1_COMPAT
                  Vec4f               &getGenFuncSPlane   (void);
#endif
                  Vec4f               &editGenFuncSPlane  (void);
            const Vec4f               &getGenFuncSPlane   (void) const;

#ifdef OSG_1_COMPAT
                  Vec4f               &getGenFuncTPlane   (void);
#endif
                  Vec4f               &editGenFuncTPlane  (void);
            const Vec4f               &getGenFuncTPlane   (void) const;

#ifdef OSG_1_COMPAT
                  Vec4f               &getGenFuncRPlane   (void);
#endif
                  Vec4f               &editGenFuncRPlane  (void);
            const Vec4f               &getGenFuncRPlane   (void) const;

#ifdef OSG_1_COMPAT
                  Vec4f               &getGenFuncQPlane   (void);
#endif
                  Vec4f               &editGenFuncQPlane  (void);
            const Vec4f               &getGenFuncQPlane   (void) const;

                  NodePtrConst getSBeacon        (void) const;

                  NodePtrConst getTBeacon        (void) const;

                  NodePtrConst getRBeacon        (void) const;

                  NodePtrConst getQBeacon        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGenFuncS       (const GLenum &value);
            void setGenFuncT       (const GLenum &value);
            void setGenFuncR       (const GLenum &value);
            void setGenFuncQ       (const GLenum &value);
            void setGenFuncSPlane  (const Vec4f &value);
            void setGenFuncTPlane  (const Vec4f &value);
            void setGenFuncRPlane  (const Vec4f &value);
            void setGenFuncQPlane  (const Vec4f &value);
            void setSBeacon        (NodePtrConstArg value);
            void setTBeacon        (NodePtrConstArg value);
            void setRBeacon        (NodePtrConstArg value);
            void setQBeacon        (NodePtrConstArg value);

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

    static  TexGenChunkPtr create     (void);
    static  TexGenChunkPtr createEmpty(void);

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

    SFGLenum          _sfGenFuncS;
    SFGLenum          _sfGenFuncT;
    SFGLenum          _sfGenFuncR;
    SFGLenum          _sfGenFuncQ;
    SFVec4f           _sfGenFuncSPlane;
    SFVec4f           _sfGenFuncTPlane;
    SFVec4f           _sfGenFuncRPlane;
    SFVec4f           _sfGenFuncQPlane;
    SFNodePtr         _sfSBeacon;
    SFNodePtr         _sfTBeacon;
    SFNodePtr         _sfRBeacon;
    SFNodePtr         _sfQBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TexGenChunkBase(void);
    TexGenChunkBase(const TexGenChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TexGenChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TexGenChunk *source = NULL);

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

            void execSync (      TexGenChunkBase *pFrom,
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

            void execSync (      TexGenChunkBase *pFrom,
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
    void operator =(const TexGenChunkBase &source);
};

typedef TexGenChunkBase *TexGenChunkBaseP;

/** Type specific RefPtr type for TexGenChunk. */
typedef RefPtr<TexGenChunkPtr> TexGenChunkRefPtr;

typedef osgIF<
    TexGenChunkBase::isNodeCore,

    CoredNodePtr<TexGenChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::_IRet

        TexGenChunkNodePtr;

OSG_END_NAMESPACE

#define OSGTEXGENCHUNKBASE_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGTEXGENCHUNKBASE_H_ */
