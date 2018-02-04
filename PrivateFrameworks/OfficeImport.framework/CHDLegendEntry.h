/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLegendEntry : NSObject {
    unsigned int  mEntryIndex;
    unsigned long long  mFontIndex;
    EDResources * mResources;
}

- (void)dealloc;
- (id)description;
- (unsigned int)entryIndex;
- (id)font;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setEntryIndex:(unsigned int)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;

@end