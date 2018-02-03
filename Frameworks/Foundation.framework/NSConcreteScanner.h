/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteScanner : NSScanner {
    struct { 
        unsigned int caseSensitive : 1; 
        unsigned int  : 31; 
    }  flags;
    NSCharacterSet * invertedSkipSet;
    id  locale;
    unsigned long long  scanLocation;
    NSString * scanString;
    NSCharacterSet * skipSet;
}

- (id)_invertedSkipSet;
- (bool)caseSensitive;
- (id)charactersToBeSkipped;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)locale;
- (bool)scanInt:(int*)arg1;
- (unsigned long long)scanLocation;
- (bool)scanLongLong:(long long*)arg1;
- (void)setCaseSensitive:(bool)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setScanLocation:(unsigned long long)arg1;
- (id)string;

@end
