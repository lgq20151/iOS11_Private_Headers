/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {
    NSString * _identifier;
    int  _maxNameIdentifier;
    NSMutableDictionary * _memoryStore;
    NSMutableDictionary * _nameIdentifierStore;
}

- (id)allImageNames;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(bool*)arg2;
- (void)clearRenditionCache;
- (void)dealloc;
- (id)imagesWithName:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)insertCGImage:(struct CGImage { }*)arg1 withName:(id)arg2 andDescription:(id)arg3;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (long long)maximumRenditionKeyTokenCount;
- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 usingKeySignature:(id)arg2;
- (bool)usesCUISystemThemeRenditionKey;

@end
