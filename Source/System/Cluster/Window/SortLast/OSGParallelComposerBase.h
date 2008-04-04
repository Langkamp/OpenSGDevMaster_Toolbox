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
 **     class ParallelComposer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPARALLELCOMPOSERBASE_H_
#define _OSGPARALLELCOMPOSERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGClusterDef.h"

#include "OSGBaseTypes.h"

#include "OSGImageComposer.h" // Parent

#include "OSGBoolFields.h" // Short type
#include "OSGBoolFields.h" // Alpha type
#include "OSGStringFields.h" // PcLibPath type

#include "OSGParallelComposerFields.h"

OSG_BEGIN_NAMESPACE

class ParallelComposer;

//! \brief ParallelComposer Base Class.

class OSG_CLUSTER_DLLMAPPING ParallelComposerBase : public ImageComposer
{
  public:

    typedef ImageComposer Inherited;
    typedef ImageComposer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ParallelComposer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ShortFieldId = Inherited::NextFieldId,
        AlphaFieldId = ShortFieldId + 1,
        PcLibPathFieldId = AlphaFieldId + 1,
        NextFieldId = PcLibPathFieldId + 1
    };

    static const OSG::BitVector ShortFieldMask =
        (TypeTraits<BitVector>::One << ShortFieldId);
    static const OSG::BitVector AlphaFieldMask =
        (TypeTraits<BitVector>::One << AlphaFieldId);
    static const OSG::BitVector PcLibPathFieldMask =
        (TypeTraits<BitVector>::One << PcLibPathFieldId);
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
                  SFBool              *getSFShort           (void);
#endif
                  SFBool              *editSFShort          (void);
            const SFBool              *getSFShort           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFAlpha           (void);
#endif
                  SFBool              *editSFAlpha          (void);
            const SFBool              *getSFAlpha           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFPcLibPath       (void);
#endif
                  SFString            *editSFPcLibPath      (void);
            const SFString            *getSFPcLibPath       (void) const;


#ifdef OSG_1_GET_COMPAT
                  bool                &getShort           (void);
#endif
                  bool                &editShort          (void);
            const bool                &getShort           (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getAlpha           (void);
#endif
                  bool                &editAlpha          (void);
            const bool                &getAlpha           (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getPcLibPath       (void);
#endif
                  std::string         &editPcLibPath      (void);
            const std::string         &getPcLibPath       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setShort          (const bool &value);
            void setAlpha          (const bool &value);
            void setPcLibPath      (const std::string &value);

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

    static  ParallelComposerTransitPtr create          (void);
    static  ParallelComposerPtr        createEmpty     (void);

    static  ParallelComposerTransitPtr createLocal     (
                                              BitVector bFlags = FCLocal::All);

    static  ParallelComposerPtr        createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool            _sfShort;
    SFBool            _sfAlpha;
    SFString          _sfPcLibPath;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ParallelComposerBase(void);
    ParallelComposerBase(const ParallelComposerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ParallelComposerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleShort           (void) const;
    EditFieldHandlePtr editHandleShort          (void);
    GetFieldHandlePtr  getHandleAlpha           (void) const;
    EditFieldHandlePtr editHandleAlpha          (void);
    GetFieldHandlePtr  getHandlePcLibPath       (void) const;
    EditFieldHandlePtr editHandlePcLibPath      (void);

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

            void execSync (      ParallelComposerBase *pFrom,
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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ParallelComposerBase &source);
};

typedef ParallelComposerBase *ParallelComposerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPARALLELCOMPOSERBASE_H_ */
