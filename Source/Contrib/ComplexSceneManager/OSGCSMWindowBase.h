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
 **     class CSMWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMWINDOWBASE_H_
#define _OSGCSMWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGFieldContainerFields.h" // Parent type
#include "OSGCSMViewportFields.h" // Viewports type
#include "OSGMouseDataFields.h" // MouseData type
#include "OSGVecFields.h" // Size type
#include "OSGSysFields.h" // DecorEnabled type
#include "OSGBaseFields.h" // IgnoreExtensions type
#include "OSGRenderOptionsFields.h" // RenderOptions type

#include "OSGCSMWindowFields.h"

OSG_BEGIN_NAMESPACE

class CSMWindow;

//! \brief CSMWindow Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMWindowBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ParentFieldId = Inherited::NextFieldId,
        ViewportsFieldId = ParentFieldId + 1,
        MouseDataFieldId = ViewportsFieldId + 1,
        SizeFieldId = MouseDataFieldId + 1,
        PositionFieldId = SizeFieldId + 1,
        DecorEnabledFieldId = PositionFieldId + 1,
        RequestMajorFieldId = DecorEnabledFieldId + 1,
        RequestMinorFieldId = RequestMajorFieldId + 1,
        EnableForwardCompatContextFieldId = RequestMinorFieldId + 1,
        EnableDebugContextFieldId = EnableForwardCompatContextFieldId + 1,
        IgnoreExtensionsFieldId = EnableDebugContextFieldId + 1,
        RequestSamplesFieldId = IgnoreExtensionsFieldId + 1,
        EnableFSAAFieldId = RequestSamplesFieldId + 1,
        FsaaHintFieldId = EnableFSAAFieldId + 1,
        RenderOptionsFieldId = FsaaHintFieldId + 1,
        PartitionDrawModeFieldId = RenderOptionsFieldId + 1,
        DumpContainerFieldId = PartitionDrawModeFieldId + 1,
        NextFieldId = DumpContainerFieldId + 1
    };

    static const OSG::BitVector ParentFieldMask =
        (TypeTraits<BitVector>::One << ParentFieldId);
    static const OSG::BitVector ViewportsFieldMask =
        (TypeTraits<BitVector>::One << ViewportsFieldId);
    static const OSG::BitVector MouseDataFieldMask =
        (TypeTraits<BitVector>::One << MouseDataFieldId);
    static const OSG::BitVector SizeFieldMask =
        (TypeTraits<BitVector>::One << SizeFieldId);
    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector DecorEnabledFieldMask =
        (TypeTraits<BitVector>::One << DecorEnabledFieldId);
    static const OSG::BitVector RequestMajorFieldMask =
        (TypeTraits<BitVector>::One << RequestMajorFieldId);
    static const OSG::BitVector RequestMinorFieldMask =
        (TypeTraits<BitVector>::One << RequestMinorFieldId);
    static const OSG::BitVector EnableForwardCompatContextFieldMask =
        (TypeTraits<BitVector>::One << EnableForwardCompatContextFieldId);
    static const OSG::BitVector EnableDebugContextFieldMask =
        (TypeTraits<BitVector>::One << EnableDebugContextFieldId);
    static const OSG::BitVector IgnoreExtensionsFieldMask =
        (TypeTraits<BitVector>::One << IgnoreExtensionsFieldId);
    static const OSG::BitVector RequestSamplesFieldMask =
        (TypeTraits<BitVector>::One << RequestSamplesFieldId);
    static const OSG::BitVector EnableFSAAFieldMask =
        (TypeTraits<BitVector>::One << EnableFSAAFieldId);
    static const OSG::BitVector FsaaHintFieldMask =
        (TypeTraits<BitVector>::One << FsaaHintFieldId);
    static const OSG::BitVector RenderOptionsFieldMask =
        (TypeTraits<BitVector>::One << RenderOptionsFieldId);
    static const OSG::BitVector PartitionDrawModeFieldMask =
        (TypeTraits<BitVector>::One << PartitionDrawModeFieldId);
    static const OSG::BitVector DumpContainerFieldMask =
        (TypeTraits<BitVector>::One << DumpContainerFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFParentFieldContainerPtr SFParentType;
    typedef MFUnrecCSMViewportPtr MFViewportsType;
    typedef SFMouseData       SFMouseDataType;
    typedef SFVec2f           SFSizeType;
    typedef SFVec2f           SFPositionType;
    typedef SFBool            SFDecorEnabledType;
    typedef SFInt32           SFRequestMajorType;
    typedef SFInt32           SFRequestMinorType;
    typedef SFBool            SFEnableForwardCompatContextType;
    typedef SFBool            SFEnableDebugContextType;
    typedef MFString          MFIgnoreExtensionsType;
    typedef SFUInt32          SFRequestSamplesType;
    typedef SFBool            SFEnableFSAAType;
    typedef SFUInt32          SFFsaaHintType;
    typedef SFUnrecRenderOptionsPtr SFRenderOptionsType;
    typedef SFUInt32          SFPartitionDrawModeType;
    typedef SFBool            SFDumpContainerType;

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

            const MFUnrecCSMViewportPtr *getMFViewports      (void) const;
                  MFUnrecCSMViewportPtr *editMFViewports      (void);

                  SFMouseData         *editSFMouseData      (void);
            const SFMouseData         *getSFMouseData       (void) const;

                  SFVec2f             *editSFSize           (void);
            const SFVec2f             *getSFSize            (void) const;

                  SFVec2f             *editSFPosition       (void);
            const SFVec2f             *getSFPosition        (void) const;

                  SFBool              *editSFDecorEnabled   (void);
            const SFBool              *getSFDecorEnabled    (void) const;

                  SFInt32             *editSFRequestMajor   (void);
            const SFInt32             *getSFRequestMajor    (void) const;

                  SFInt32             *editSFRequestMinor   (void);
            const SFInt32             *getSFRequestMinor    (void) const;

                  SFBool              *editSFEnableForwardCompatContext(void);
            const SFBool              *getSFEnableForwardCompatContext (void) const;

                  SFBool              *editSFEnableDebugContext(void);
            const SFBool              *getSFEnableDebugContext (void) const;

                  MFString            *editMFIgnoreExtensions(void);
            const MFString            *getMFIgnoreExtensions (void) const;

                  SFUInt32            *editSFRequestSamples (void);
            const SFUInt32            *getSFRequestSamples  (void) const;

                  SFBool              *editSFEnableFSAA     (void);
            const SFBool              *getSFEnableFSAA      (void) const;

                  SFUInt32            *editSFFsaaHint       (void);
            const SFUInt32            *getSFFsaaHint        (void) const;
            const SFUnrecRenderOptionsPtr *getSFRenderOptions  (void) const;
                  SFUnrecRenderOptionsPtr *editSFRenderOptions  (void);

                  SFUInt32            *editSFPartitionDrawMode(void);
            const SFUInt32            *getSFPartitionDrawMode (void) const;

                  SFBool              *editSFDumpContainer  (void);
            const SFBool              *getSFDumpContainer   (void) const;


                  CSMViewport * getViewports      (const UInt32 index) const;

                  MouseData           &editMouseData      (void);
            const MouseData           &getMouseData       (void) const;

                  Vec2f               &editSize           (void);
            const Vec2f               &getSize            (void) const;

                  Vec2f               &editPosition       (void);
            const Vec2f               &getPosition        (void) const;

                  bool                &editDecorEnabled   (void);
                  bool                 getDecorEnabled    (void) const;

                  Int32               &editRequestMajor   (void);
                  Int32                getRequestMajor    (void) const;

                  Int32               &editRequestMinor   (void);
                  Int32                getRequestMinor    (void) const;

                  bool                &editEnableForwardCompatContext(void);
                  bool                 getEnableForwardCompatContext (void) const;

                  bool                &editEnableDebugContext(void);
                  bool                 getEnableDebugContext (void) const;

                  std::string         &editIgnoreExtensions(const UInt32 index);
            const std::string         &getIgnoreExtensions (const UInt32 index) const;

                  UInt32              &editRequestSamples (void);
                  UInt32               getRequestSamples  (void) const;

                  bool                &editEnableFSAA     (void);
                  bool                 getEnableFSAA      (void) const;

                  UInt32              &editFsaaHint       (void);
                  UInt32               getFsaaHint        (void) const;

                  RenderOptions * getRenderOptions  (void) const;

                  UInt32              &editPartitionDrawMode(void);
                  UInt32               getPartitionDrawMode (void) const;

                  bool                &editDumpContainer  (void);
                  bool                 getDumpContainer   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setMouseData      (const MouseData &value);
            void setSize           (const Vec2f &value);
            void setPosition       (const Vec2f &value);
            void setDecorEnabled   (const bool value);
            void setRequestMajor   (const Int32 value);
            void setRequestMinor   (const Int32 value);
            void setEnableForwardCompatContext(const bool value);
            void setEnableDebugContext(const bool value);
            void setRequestSamples (const UInt32 value);
            void setEnableFSAA     (const bool value);
            void setFsaaHint       (const UInt32 value);
            void setRenderOptions  (RenderOptions * const value);
            void setPartitionDrawMode(const UInt32 value);
            void setDumpContainer  (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToViewports           (CSMViewport * const value   );
    void assignViewports          (const MFUnrecCSMViewportPtr &value);
    void removeFromViewports (UInt32               uiIndex );
    void removeObjFromViewports(CSMViewport * const value   );
    void clearViewports             (void                         );

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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFParentFieldContainerPtr _sfParent;
    MFUnrecCSMViewportPtr _mfViewports;
    SFMouseData       _sfMouseData;
    SFVec2f           _sfSize;
    SFVec2f           _sfPosition;
    SFBool            _sfDecorEnabled;
    SFInt32           _sfRequestMajor;
    SFInt32           _sfRequestMinor;
    SFBool            _sfEnableForwardCompatContext;
    SFBool            _sfEnableDebugContext;
    MFString          _mfIgnoreExtensions;
    SFUInt32          _sfRequestSamples;
    SFBool            _sfEnableFSAA;
    SFUInt32          _sfFsaaHint;
    SFUnrecRenderOptionsPtr _sfRenderOptions;
    SFUInt32          _sfPartitionDrawMode;
    SFBool            _sfDumpContainer;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMWindowBase(void);
    CSMWindowBase(const CSMWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CSMWindow *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleParent          (void) const;
    EditFieldHandlePtr editHandleParent         (void);
    GetFieldHandlePtr  getHandleViewports       (void) const;
    EditFieldHandlePtr editHandleViewports      (void);
    GetFieldHandlePtr  getHandleMouseData       (void) const;
    EditFieldHandlePtr editHandleMouseData      (void);
    GetFieldHandlePtr  getHandleSize            (void) const;
    EditFieldHandlePtr editHandleSize           (void);
    GetFieldHandlePtr  getHandlePosition        (void) const;
    EditFieldHandlePtr editHandlePosition       (void);
    GetFieldHandlePtr  getHandleDecorEnabled    (void) const;
    EditFieldHandlePtr editHandleDecorEnabled   (void);
    GetFieldHandlePtr  getHandleRequestMajor    (void) const;
    EditFieldHandlePtr editHandleRequestMajor   (void);
    GetFieldHandlePtr  getHandleRequestMinor    (void) const;
    EditFieldHandlePtr editHandleRequestMinor   (void);
    GetFieldHandlePtr  getHandleEnableForwardCompatContext (void) const;
    EditFieldHandlePtr editHandleEnableForwardCompatContext(void);
    GetFieldHandlePtr  getHandleEnableDebugContext (void) const;
    EditFieldHandlePtr editHandleEnableDebugContext(void);
    GetFieldHandlePtr  getHandleIgnoreExtensions (void) const;
    EditFieldHandlePtr editHandleIgnoreExtensions(void);
    GetFieldHandlePtr  getHandleRequestSamples  (void) const;
    EditFieldHandlePtr editHandleRequestSamples (void);
    GetFieldHandlePtr  getHandleEnableFSAA      (void) const;
    EditFieldHandlePtr editHandleEnableFSAA     (void);
    GetFieldHandlePtr  getHandleFsaaHint        (void) const;
    EditFieldHandlePtr editHandleFsaaHint       (void);
    GetFieldHandlePtr  getHandleRenderOptions   (void) const;
    EditFieldHandlePtr editHandleRenderOptions  (void);
    GetFieldHandlePtr  getHandlePartitionDrawMode (void) const;
    EditFieldHandlePtr editHandlePartitionDrawMode(void);
    GetFieldHandlePtr  getHandleDumpContainer   (void) const;
    EditFieldHandlePtr editHandleDumpContainer  (void);

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

            void execSync (      CSMWindowBase *pFrom,
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
    void operator =(const CSMWindowBase &source);
};

typedef CSMWindowBase *CSMWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMWINDOWBASE_H_ */
