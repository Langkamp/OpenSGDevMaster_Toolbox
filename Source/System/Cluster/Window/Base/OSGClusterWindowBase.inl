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
 **     class ClusterWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ClusterWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ClusterWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ClusterWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ClusterWindow::_sfConnectionType field.

inline
std::string &ClusterWindowBase::editConnectionType(void)
{
    editSField(ConnectionTypeFieldMask);

    return _sfConnectionType.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionType field.
inline
const std::string &ClusterWindowBase::getConnectionType(void) const
{
    return _sfConnectionType.getValue();
}

//! Set the value of the ClusterWindow::_sfConnectionType field.
inline
void ClusterWindowBase::setConnectionType(const std::string &value)
{
    editSField(ConnectionTypeFieldMask);

    _sfConnectionType.setValue(value);
}
//! Get the value of the ClusterWindow::_sfConnectionInterface field.

inline
std::string &ClusterWindowBase::editConnectionInterface(void)
{
    editSField(ConnectionInterfaceFieldMask);

    return _sfConnectionInterface.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionInterface field.
inline
const std::string &ClusterWindowBase::getConnectionInterface(void) const
{
    return _sfConnectionInterface.getValue();
}

//! Set the value of the ClusterWindow::_sfConnectionInterface field.
inline
void ClusterWindowBase::setConnectionInterface(const std::string &value)
{
    editSField(ConnectionInterfaceFieldMask);

    _sfConnectionInterface.setValue(value);
}
//! Get the value of the ClusterWindow::_sfConnectionDestination field.

inline
std::string &ClusterWindowBase::editConnectionDestination(void)
{
    editSField(ConnectionDestinationFieldMask);

    return _sfConnectionDestination.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionDestination field.
inline
const std::string &ClusterWindowBase::getConnectionDestination(void) const
{
    return _sfConnectionDestination.getValue();
}

//! Set the value of the ClusterWindow::_sfConnectionDestination field.
inline
void ClusterWindowBase::setConnectionDestination(const std::string &value)
{
    editSField(ConnectionDestinationFieldMask);

    _sfConnectionDestination.setValue(value);
}
//! Get the value of the ClusterWindow::_sfConnectionParams field.

inline
std::string &ClusterWindowBase::editConnectionParams(void)
{
    editSField(ConnectionParamsFieldMask);

    return _sfConnectionParams.getValue();
}

//! Get the value of the ClusterWindow::_sfConnectionParams field.
inline
const std::string &ClusterWindowBase::getConnectionParams(void) const
{
    return _sfConnectionParams.getValue();
}

//! Set the value of the ClusterWindow::_sfConnectionParams field.
inline
void ClusterWindowBase::setConnectionParams(const std::string &value)
{
    editSField(ConnectionParamsFieldMask);

    _sfConnectionParams.setValue(value);
}
//! Get the value of the ClusterWindow::_sfServicePort field.

inline
UInt32 &ClusterWindowBase::editServicePort(void)
{
    editSField(ServicePortFieldMask);

    return _sfServicePort.getValue();
}

//! Get the value of the ClusterWindow::_sfServicePort field.
inline
      UInt32  ClusterWindowBase::getServicePort(void) const
{
    return _sfServicePort.getValue();
}

//! Set the value of the ClusterWindow::_sfServicePort field.
inline
void ClusterWindowBase::setServicePort(const UInt32 value)
{
    editSField(ServicePortFieldMask);

    _sfServicePort.setValue(value);
}
//! Get the value of the ClusterWindow::_sfServiceAddress field.

inline
std::string &ClusterWindowBase::editServiceAddress(void)
{
    editSField(ServiceAddressFieldMask);

    return _sfServiceAddress.getValue();
}

//! Get the value of the ClusterWindow::_sfServiceAddress field.
inline
const std::string &ClusterWindowBase::getServiceAddress(void) const
{
    return _sfServiceAddress.getValue();
}

//! Set the value of the ClusterWindow::_sfServiceAddress field.
inline
void ClusterWindowBase::setServiceAddress(const std::string &value)
{
    editSField(ServiceAddressFieldMask);

    _sfServiceAddress.setValue(value);
}
//! Get the value of the ClusterWindow::_sfServiceInterface field.

inline
std::string &ClusterWindowBase::editServiceInterface(void)
{
    editSField(ServiceInterfaceFieldMask);

    return _sfServiceInterface.getValue();
}

//! Get the value of the ClusterWindow::_sfServiceInterface field.
inline
const std::string &ClusterWindowBase::getServiceInterface(void) const
{
    return _sfServiceInterface.getValue();
}

//! Set the value of the ClusterWindow::_sfServiceInterface field.
inline
void ClusterWindowBase::setServiceInterface(const std::string &value)
{
    editSField(ServiceInterfaceFieldMask);

    _sfServiceInterface.setValue(value);
}

//! Get the value of the ClusterWindow::_sfClientWindow field.
inline
Window * ClusterWindowBase::getClientWindow(void) const
{
    return _sfClientWindow.getValue();
}

//! Set the value of the ClusterWindow::_sfClientWindow field.
inline
void ClusterWindowBase::setClientWindow(Window * const value)
{
    editSField(ClientWindowFieldMask);

    _sfClientWindow.setValue(value);
}
//! Get the value of the ClusterWindow::_sfInterleave field.

inline
UInt32 &ClusterWindowBase::editInterleave(void)
{
    editSField(InterleaveFieldMask);

    return _sfInterleave.getValue();
}

//! Get the value of the ClusterWindow::_sfInterleave field.
inline
      UInt32  ClusterWindowBase::getInterleave(void) const
{
    return _sfInterleave.getValue();
}

//! Set the value of the ClusterWindow::_sfInterleave field.
inline
void ClusterWindowBase::setInterleave(const UInt32 value)
{
    editSField(InterleaveFieldMask);

    _sfInterleave.setValue(value);
}
//! Get the value of the ClusterWindow::_sfFrameCount field.

inline
UInt32 &ClusterWindowBase::editFrameCount(void)
{
    editSField(FrameCountFieldMask);

    return _sfFrameCount.getValue();
}

//! Get the value of the ClusterWindow::_sfFrameCount field.
inline
      UInt32  ClusterWindowBase::getFrameCount(void) const
{
    return _sfFrameCount.getValue();
}

//! Set the value of the ClusterWindow::_sfFrameCount field.
inline
void ClusterWindowBase::setFrameCount(const UInt32 value)
{
    editSField(FrameCountFieldMask);

    _sfFrameCount.setValue(value);
}

//! Get the value of the ClusterWindow::_sfComposer field.
inline
ImageComposer * ClusterWindowBase::getComposer(void) const
{
    return _sfComposer.getValue();
}

//! Set the value of the ClusterWindow::_sfComposer field.
inline
void ClusterWindowBase::setComposer(ImageComposer * const value)
{
    editSField(ComposerFieldMask);

    _sfComposer.setValue(value);
}

//! Get the value of the \a index element the ClusterWindow::_mfServers field.
inline
const std::string &ClusterWindowBase::getServers(const UInt32 index) const
{
    return _mfServers[index];
}

inline
std::string &ClusterWindowBase::editServers(const UInt32 index)
{
    editMField(ServersFieldMask, _mfServers);

    return _mfServers[index];
}


//! Get the value of the \a index element the ClusterWindow::_mfServerIds field.
inline
      UInt32  ClusterWindowBase::getServerIds(const UInt32 index) const
{
    return _mfServerIds[index];
}

inline
UInt32 &ClusterWindowBase::editServerIds(const UInt32 index)
{
    editMField(ServerIdsFieldMask, _mfServerIds);

    return _mfServerIds[index];
}


//! Get the value of the \a index element the ClusterWindow::_mfAutostart field.
inline
const std::string &ClusterWindowBase::getAutostart(const UInt32 index) const
{
    return _mfAutostart[index];
}

inline
std::string &ClusterWindowBase::editAutostart(const UInt32 index)
{
    editMField(AutostartFieldMask, _mfAutostart);

    return _mfAutostart[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void ClusterWindowBase::execSync (      ClusterWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
        _mfServers.syncWith(pFrom->_mfServers,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ServerIdsFieldMask & whichField))
        _mfServerIds.syncWith(pFrom->_mfServerIds,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
        _sfConnectionType.syncWith(pFrom->_sfConnectionType);

    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
        _sfConnectionInterface.syncWith(pFrom->_sfConnectionInterface);

    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
        _sfConnectionDestination.syncWith(pFrom->_sfConnectionDestination);

    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
        _sfConnectionParams.syncWith(pFrom->_sfConnectionParams);

    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
        _sfServicePort.syncWith(pFrom->_sfServicePort);

    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
        _sfServiceAddress.syncWith(pFrom->_sfServiceAddress);

    if(FieldBits::NoField != (ServiceInterfaceFieldMask & whichField))
        _sfServiceInterface.syncWith(pFrom->_sfServiceInterface);

    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
        _sfClientWindow.syncWith(pFrom->_sfClientWindow);

    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
        _sfInterleave.syncWith(pFrom->_sfInterleave);

    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
        _sfFrameCount.syncWith(pFrom->_sfFrameCount);

    if(FieldBits::NoField != (ComposerFieldMask & whichField))
        _sfComposer.syncWith(pFrom->_sfComposer);

    if(FieldBits::NoField != (AutostartFieldMask & whichField))
        _mfAutostart.syncWith(pFrom->_mfAutostart,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *ClusterWindowBase::getClassname(void)
{
    return "ClusterWindow";
}
OSG_GEN_CONTAINERPTR(ClusterWindow);

OSG_END_NAMESPACE

