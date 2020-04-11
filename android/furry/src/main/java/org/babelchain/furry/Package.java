package org.babelchain.furry;

import androidx.annotation.NonNull;

import com.facebook.react.ReactPackage;
import com.facebook.react.bridge.CxxModuleWrapper;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.uimanager.ViewManager;

import java.util.ArrayList;
import java.util.List;

public class Package implements ReactPackage {
    @NonNull
    @Override
    public List<NativeModule> createNativeModules(@NonNull ReactApplicationContext reactContext) {
        List<NativeModule> modules = new ArrayList<>();
        modules.add(CxxModuleWrapper.makeDso("furry", "create_furry_Vedis"));
        modules.add(CxxModuleWrapper.makeDso("furry", "create_furry_SQLite"));
//        modules.add(CxxModuleWrapper.makeDso("furry", "create_furry_fs"));
//        modules.add(CxxModuleWrapper.makeDso("furry", "create_furry_analytics"));
        return modules;
    }

    @NonNull
    @Override
    public List<ViewManager> createViewManagers(@NonNull ReactApplicationContext reactContext) {
        return new ArrayList<>();
    }
}
