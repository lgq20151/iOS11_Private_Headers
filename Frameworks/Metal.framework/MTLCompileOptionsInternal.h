/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompileOptionsInternal : MTLCompileOptions {
    bool  _debuggingEnabled;
    bool  _fastMathEnabled;
    bool  _glBufferBindPoints;
    unsigned long long  _languageVersion;
    NSDictionary * _preprocessorMacros;
    bool  _userSetLanguageVersion;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)debuggingEnabled;
- (id)description;
- (bool)fastMathEnabled;
- (id)formattedDescription:(unsigned long long)arg1;
- (bool)glBufferBindPoints;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)languageVersion;
- (id)preprocessorMacros;
- (void)setDebuggingEnabled:(bool)arg1;
- (void)setFastMathEnabled:(bool)arg1;
- (void)setGlBufferBindPoints:(bool)arg1;
- (void)setLanguageVersion:(unsigned long long)arg1;
- (void)setPreprocessorMacros:(id)arg1;

@end
