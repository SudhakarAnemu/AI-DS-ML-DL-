ARG BASE_CONTAINER=jupyter/base-notebook:38f518466042
FROM $BASE_CONTAINER

#Set the working directory
WORKDIR /home/jovyan/

LABEL version=".1"
LABEL description="Jupyter notebook with support for interactive widgets"
LABEL maintainer="Chakri Cherukuri <chakri.v.cherukuri@gmail.com>"

USER root

RUN conda install --quiet --yes \
    'conda-forge::blas=*=openblas' \
    'ipywidgets=7.4*' \
    'pandas=0.24*' \
    'scipy=1.2*' \
    'scikit-learn=0.20*' && \
    conda clean --all -f -y && \
    # ipywidgets nbextension
    jupyter nbextension enable --py widgetsnbextension --sys-prefix && \
    # install bqplot
    pip install bqplot==0.11.5 && \
    jupyter nbextension enable bqplot --py --sys-prefix && \
    # install voila
    conda install -c conda-forge voila && \
    jupyter serverextension enable voila --sys-prefix && \
    rm -rf work

# Allow user to write to directory
RUN chown -R $NB_USER /home/jovyan \
    && chmod -R 774 /home/jovyan

# Add files
COPY notebooks /home/jovyan/notebooks
COPY data /home/jovyan/data

USER $NB_USER

# Expose the notebook port
EXPOSE 8888

# Start the notebook server
CMD jupyter notebook --no-browser --port 8888 --ip=0.0.0.0 --NotebookApp.token='' --NotebookApp.disable_check_xsrf=True --NotebookApp.iopub_data_rate_limit=1.0e10
