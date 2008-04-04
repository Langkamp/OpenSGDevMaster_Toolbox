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
 **     class Window
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGWINDOWBASE_H_
#define _OSGWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGUInt16Fields.h" // Width type
#include "OSGUInt16Fields.h" // Height type
#include "OSGViewportFields.h" // Port type
#include "OSGBoolFields.h" // ResizePending type
#include "OSGUInt32Fields.h" // GlObjectEventCounter type
#include "OSGUInt32Fields.h" // GlObjectLastRefresh type
#include "OSGUInt32Fields.h" // GlObjectLastReinitialize type
#include "OSGUInt32Fields.h" // DrawerId type

#include "OSGWindowFields.h"

OSG_BEGIN_NAMESPACE

class Window;

//! \brief Window Base Class.

class OSG_SYSTEM_DLLMAPPING WindowBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Window);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        WidthFieldId = Inherited::NextFieldId,
        HeightFieldId = WidthFieldId + 1,
        PortFieldId = HeightFieldId + 1,
        ResizePendingFieldId = PortFieldId + 1,
        GlObjectEventCounterFieldId = ResizePendingFieldId + 1,
        GlObjectLastRefreshFieldId = GlObjectEventCounterFieldId + 1,
        GlObjectLastReinitializeFieldId = GlObjectLastRefreshFieldId + 1,
        DrawerIdFieldId = GlObjectLastReinitializeFieldId + 1,
        NextFieldId = DrawerIdFieldId + 1
    };

    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector PortFieldMask =
        (TypeTraits<BitVector>::One << PortFieldId);
    static const OSG::BitVector ResizePendingFieldMask =
        (TypeTraits<BitVector>::One << ResizePendingFieldId);
    static const OSG::BitVector GlObjectEventCounterFieldMask =
        (TypeTraits<BitVector>::One << GlObjectEventCounterFieldId);
    static const OSG::BitVector GlObjectLastRefreshFieldMask =
        (TypeTraits<BitVector>::One << GlObjectLastRefreshFieldId);
    static const OSG::BitVector GlObjectLastReinitializeFieldMask =
        (TypeTraits<BitVector>::One << GlObjectLastReinitializeFieldId);
    static const OSG::BitVector DrawerIdFieldMask =
        (TypeTraits<BitVector>::One << DrawerIdFieldId);
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
                  SFUInt16            *getSFWidth           (void);
#endif
                  SFUInt16            *editSFWidth          (void);
            const SFUInt16            *getSFWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt16            *getSFHeight          (void);
#endif
                  SFUInt16            *editSFHeight         (void);
            const SFUInt16            *getSFHeight          (void) const;
            const MFUnrecFieldContainerChildViewportPtr *getMFPort            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFResizePending   (void);
#endif
                  SFBool              *editSFResizePending  (void);
            const SFBool              *getSFResizePending   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFDrawerId        (void);
#endif
                  SFUInt32            *editSFDrawerId       (void);
            const SFUInt32            *getSFDrawerId        (void) const;


#ifdef OSG_1_GET_COMPAT
                  UInt16              &getWidth           (void);
#endif
                  UInt16              &editWidth          (void);
            const UInt16              &getWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt16              &getHeight          (void);
#endif
                  UInt16              &editHeight         (void);
            const UInt16              &getHeight          (void) const;

                  ViewportPtrConst getPort           (const UInt32 index) const;
            const MFUnrecFieldContainerChildViewportPtr &getPort           (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getResizePending   (void);
#endif
                  bool                &editResizePending  (void);
            const bool                &getResizePending   (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getDrawerId        (void);
#endif
                  UInt32              &editDrawerId       (void);
            const UInt32              &getDrawerId        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setWidth          (const UInt16 &value);
            void setHeight         (const UInt16 &value);
            void setResizePending  (const bool &value);
            void setDrawerId       (const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void addPort                   (ViewportPtrConstArg value   );
    void assignPort                (const MFUnrecFieldContainerChildViewportPtr &value);
    void insertPort           (UInt32                uiIndex,
                                             ViewportPtrConstArg value   );
    void replacePort      (UInt32                uiIndex,
                                             ViewportPtrConstArg value   );
    void replacePortBy   (ViewportPtrConstArg pOldElem,
                                             ViewportPtrConstArg pNewElem);
    void subPort         (UInt32                uiIndex );
    void subPort        (ViewportPtrConstArg value   );
    void clearPorts                 (void                          );


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

    virtual void subChildPointer(FieldContainerPtr pObj, 
                                 UInt16            usFieldPos);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt16          _sfWidth;
    SFUInt16          _sfHeight;
    MFUnrecFieldContainerChildViewportPtr _mfPort;
    SFBool            _sfResizePending;
    SFUInt32          _sfGlObjectEventCounter;
    MFUInt32          _mfGlObjectLastRefresh;
    MFUInt32          _mfGlObjectLastReinitialize;
    SFUInt32          _sfDrawerId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    WindowBase(void);
    WindowBase(const WindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~WindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Window *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);
    GetFieldHandlePtr  getHandlePort            (void) const;
    EditFieldHandlePtr editHandlePort           (void);
    GetFieldHandlePtr  getHandleResizePending   (void) const;
    EditFieldHandlePtr editHandleResizePending  (void);
    GetFieldHandlePtr  getHandleGlObjectEventCounter (void) const;
    EditFieldHandlePtr editHandleGlObjectEventCounter(void);
    GetFieldHandlePtr  getHandleGlObjectLastRefresh (void) const;
    EditFieldHandlePtr editHandleGlObjectLastRefresh(void);
    GetFieldHandlePtr  getHandleGlObjectLastReinitialize (void) const;
    EditFieldHandlePtr editHandleGlObjectLastReinitialize(void);
    GetFieldHandlePtr  getHandleDrawerId        (void) const;
    EditFieldHandlePtr editHandleDrawerId       (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFGlObjectEventCounter (void);
#endif
                  SFUInt32            *editSFGlObjectEventCounter(void);
            const SFUInt32            *getSFGlObjectEventCounter (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFUInt32            *getMFGlObjectLastRefresh (void);
#endif
                  MFUInt32            *editMFGlObjectLastRefresh(void);
            const MFUInt32            *getMFGlObjectLastRefresh (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFUInt32            *getMFGlObjectLastReinitialize (void);
#endif
                  MFUInt32            *editMFGlObjectLastReinitialize(void);
            const MFUInt32            *getMFGlObjectLastReinitialize (void) const;


#ifdef OSG_1_GET_COMPAT
                  UInt32              &getGlObjectEventCounter (void);
#endif
                  UInt32              &editGlObjectEventCounter(void);
            const UInt32              &getGlObjectEventCounter (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getGlObjectLastRefresh (const UInt32 index);
                  MFUInt32            &getGlObjectLastRefresh(void);
#endif
                  UInt32              &editGlObjectLastRefresh(const UInt32 index);
            const UInt32              &getGlObjectLastRefresh (const UInt32 index) const;
                  MFUInt32            &editGlObjectLastRefresh(void);
            const MFUInt32            &getGlObjectLastRefresh (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getGlObjectLastReinitialize (const UInt32 index);
                  MFUInt32            &getGlObjectLastReinitialize(void);
#endif
                  UInt32              &editGlObjectLastReinitialize(const UInt32 index);
            const UInt32              &getGlObjectLastReinitialize (const UInt32 index) const;
                  MFUInt32            &editGlObjectLastReinitialize(void);
            const MFUInt32            &getGlObjectLastReinitialize (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGlObjectEventCounter(const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */




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

            void execSync (      WindowBase *pFrom,
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
    void operator =(const WindowBase &source);
};

typedef WindowBase *WindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGWINDOWBASE_H_ */
