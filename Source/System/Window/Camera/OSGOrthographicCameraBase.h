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
 **     class OrthographicCamera
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGORTHOGRAPHICCAMERABASE_H_
#define _OSGORTHOGRAPHICCAMERABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGCamera.h" // Parent

#include "OSGReal32Fields.h" // VerticalSize type
#include "OSGReal32Fields.h" // Aspect type

#include "OSGOrthographicCameraFields.h"

OSG_BEGIN_NAMESPACE

class OrthographicCamera;

//! \brief OrthographicCamera Base Class.

class OSG_WINDOW_DLLMAPPING OrthographicCameraBase : public Camera
{
  public:

    typedef Camera Inherited;
    typedef Camera ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(OrthographicCamera);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        VerticalSizeFieldId = Inherited::NextFieldId,
        AspectFieldId = VerticalSizeFieldId + 1,
        NextFieldId = AspectFieldId + 1
    };

    static const OSG::BitVector VerticalSizeFieldMask =
        (TypeTraits<BitVector>::One << VerticalSizeFieldId);
    static const OSG::BitVector AspectFieldMask =
        (TypeTraits<BitVector>::One << AspectFieldId);
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


#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFVerticalSize    (void);
#endif
                  SFReal32            *editSFVerticalSize   (void);
            const SFReal32            *getSFVerticalSize    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFAspect          (void);
#endif
                  SFReal32            *editSFAspect         (void);
            const SFReal32            *getSFAspect          (void) const;


#ifdef OSG_1_GET_COMPAT
                  Real32              &getVerticalSize    (void);
#endif
                  Real32              &editVerticalSize   (void);
            const Real32              &getVerticalSize    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getAspect          (void);
#endif
                  Real32              &editAspect         (void);
            const Real32              &getAspect          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setVerticalSize   (const Real32 &value);
            void setAspect         (const Real32 &value);

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

    static  OrthographicCameraPtr create     (void);
    static  OrthographicCameraPtr createEmpty(void);

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

    SFReal32          _sfVerticalSize;
    SFReal32          _sfAspect;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    OrthographicCameraBase(void);
    OrthographicCameraBase(const OrthographicCameraBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~OrthographicCameraBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleVerticalSize    (void) const;
    EditFieldHandlePtr editHandleVerticalSize   (void);
    GetFieldHandlePtr  getHandleAspect          (void) const;
    EditFieldHandlePtr editHandleAspect         (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      OrthographicCameraBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

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
    void operator =(const OrthographicCameraBase &source);
};

typedef OrthographicCameraBase *OrthographicCameraBaseP;

/** Type specific RefPtr type for OrthographicCamera. */
typedef RefPtr<OrthographicCameraPtr> OrthographicCameraRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<OrthographicCameraBase::isNodeCore>,
    CoredNodePtr<OrthographicCamera>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        OrthographicCameraNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGORTHOGRAPHICCAMERABASE_H_ */