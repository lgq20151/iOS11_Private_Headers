/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
    unsigned int  _externalPrecision;
    int  _externalScale;
    int  _externalType;
}

- (id)attribute;
- (id)columnDefinition;
- (unsigned int)externalPrecision;
- (int)externalScale;
- (int)externalType;
- (id)initWithProperty:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setExternalPrecision:(unsigned int)arg1;
- (void)setExternalScale:(int)arg1;
- (void)setExternalType:(int)arg1;
- (id)sqlType;

@end