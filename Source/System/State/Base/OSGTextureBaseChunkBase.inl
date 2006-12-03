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
 **     class TextureBaseChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureBaseChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextureBaseChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TextureBaseChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextureBaseChunk::_sfTarget field.

inline
GLenum &TextureBaseChunkBase::editTarget(void)
{
    editSField(TargetFieldMask);

    return _sfTarget.getValue();
}

//! Get the value of the TextureBaseChunk::_sfTarget field.
inline
const GLenum &TextureBaseChunkBase::getTarget(void) const
{
    return _sfTarget.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum              &TextureBaseChunkBase::getTarget         (void)
{
    return this->editTarget         ();
}
#endif

//! Set the value of the TextureBaseChunk::_sfTarget field.
inline
void TextureBaseChunkBase::setTarget(const GLenum &value)
{
    editSField(TargetFieldMask);

    _sfTarget.setValue(value);
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void TextureBaseChunkBase::execSync(      TextureBaseChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
        _sfTarget.syncWith(pOther->_sfTarget);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void TextureBaseChunkBase::execSync (      TextureBaseChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
        _sfTarget.syncWith(pFrom->_sfTarget);
}
#endif

#if 0
inline
void TextureBaseChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *TextureBaseChunkBase::getClassname(void)
{
    return "TextureBaseChunk";
}

typedef PointerBuilder<TextureBaseChunk>::ObjPtr          TextureBaseChunkPtr;
typedef PointerBuilder<TextureBaseChunk>::ObjPtrConst     TextureBaseChunkPtrConst;
typedef PointerBuilder<TextureBaseChunk>::ObjConstPtr     TextureBaseChunkConstPtr;

typedef PointerBuilder<TextureBaseChunk>::ObjPtrArg       TextureBaseChunkPtrArg;
typedef PointerBuilder<TextureBaseChunk>::ObjConstPtrArg  TextureBaseChunkConstPtrArg;
typedef PointerBuilder<TextureBaseChunk>::ObjPtrConstArg  TextureBaseChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGTEXTUREBASECHUNKBASE_INLINE_CVSID "@(#)$Id$"
