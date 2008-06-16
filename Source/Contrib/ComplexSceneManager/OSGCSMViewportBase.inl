/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class CSMViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CSMViewportBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CSMViewportBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CSMViewportBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the CSMViewport::_sfRoot field.
inline
Node * CSMViewportBase::getRoot(void) const
{
    return _sfRoot.getValue();
}

//! Set the value of the CSMViewport::_sfRoot field.
inline
void CSMViewportBase::setRoot(Node * const value)
{
    editSField(RootFieldMask);

    _sfRoot.setValue(value);
}

//! Get the value of the CSMViewport::_sfCamera field.
inline
Camera * CSMViewportBase::getCamera(void) const
{
    return _sfCamera.getValue();
}

//! Set the value of the CSMViewport::_sfCamera field.
inline
void CSMViewportBase::setCamera(Camera * const value)
{
    editSField(CameraFieldMask);

    _sfCamera.setValue(value);
}

//! Get the value of the CSMViewport::_sfBackground field.
inline
Background * CSMViewportBase::getBackground(void) const
{
    return _sfBackground.getValue();
}

//! Set the value of the CSMViewport::_sfBackground field.
inline
void CSMViewportBase::setBackground(Background * const value)
{
    editSField(BackgroundFieldMask);

    _sfBackground.setValue(value);
}

//! Get the value of the \a index element the CSMViewport::_mfForegrounds field.
inline
Foreground * CSMViewportBase::getForegrounds(const UInt32 index) const
{
    return _mfForegrounds[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CSMViewportBase::execSync (      CSMViewportBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pFrom->_sfRoot);

    if(FieldBits::NoField != (CameraFieldMask & whichField))
        _sfCamera.syncWith(pFrom->_sfCamera);

    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
        _sfBackground.syncWith(pFrom->_sfBackground);

    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
        _mfForegrounds.syncWith(pFrom->_mfForegrounds,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
Char8 *CSMViewportBase::getClassname(void)
{
    return "CSMViewport";
}
OSG_GEN_CONTAINERPTR(CSMViewport);

OSG_END_NAMESPACE
