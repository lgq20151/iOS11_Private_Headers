/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
    struct RefPtr<WebCore::FileChooser> { 
        struct FileChooser {} *m_ptr; 
    }  _chooser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)chooseFilename:(id)arg1;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;
- (id)initWithChooser:(struct FileChooser { unsigned int x1; struct FileChooserClient {} *x2; struct FileChooserSettings { bool x_3_1_1; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_3_1_3; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_3_1_4; int x_3_1_5; } x3; }*)arg1;

@end
