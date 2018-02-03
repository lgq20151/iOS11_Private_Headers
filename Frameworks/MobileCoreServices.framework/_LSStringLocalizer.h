/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSStringLocalizer : NSObject {
    NSArray * _bundleLocalizations;
    bool  _isMainBundle;
    NSString * _stringsFile;
    NSMutableDictionary * _stringsFileContent;
    NSMutableDictionary * _unlocalizedInfoPlistStrings;
    NSURL * _url;
}

+ (id)coreTypesLocalizer;
+ (id)frameworkBundleLocalizer;
+ (id)preferredLocalizationsForXCTests;
+ (id)queue;
+ (void)setPreferredLocalizationsForXCTests:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithBundleURL:(id)arg1 stringsFile:(id)arg2 keepBundle:(bool)arg3;
- (struct __CFBundle { }*)bundle;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2;
- (id)initWithDatabase:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1 bundleUnit:(unsigned int)arg2 delegate:(unsigned int)arg3;
- (id)initWithDatabase:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1 pluginUnit:(unsigned int)arg2;
- (id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle { }*)arg2 localeCode:(id)arg3 keep:(bool)arg4;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle { }*)arg2 preferredLocalizations:(id)arg3 keep:(bool)arg4;
- (id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2;
- (id)stringsFileContentInBundle:(struct __CFBundle { }*)arg1 withLocaleCode:(id)arg2 keep:(bool)arg3;

@end
