/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    struct { 
        unsigned int _inverted : 1; 
        unsigned int _builtin : 1; 
        unsigned int _isCF : 1; 
        unsigned int _reserved : 29; 
    }  _flags;
    NSCharacterSet * _invertedSet;
    NSCharacterSet * _original;
}

- (void)_expandInverted;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (id)bitmapRepresentation;
- (bool)characterIsMember:(unsigned short)arg1;
- (void)dealloc;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (id)initWithSet:(id)arg1 options:(unsigned long long)arg2;
- (id)invertedSet;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;

@end
